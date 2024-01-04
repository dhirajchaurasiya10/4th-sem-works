
void convert(char infix[],char postfix[]){
	int i,symbol,j=0;
	stack[++top]='#';
	for(i=0;i<strlen(infix);i++){
		symbol = infix[i];
		if(isoperator(symbol)==0){
			postfix[j]=symbol;
			j++;
		}
		else {
			if(symbol == '('){
				push(symbol);
			}
		
		else {
			if(symbol == ')'){
				while(stack[top]!=')'){
					postfix[j]=pop();
					j++;
				}
				pop();
			}
			else {
				if(precedence(symbol)>precedence(stack[top])){
					push(symbol);
				}
				else {
					while(precedence(symbol)<=precedence(stack[top])){
						postfix[j]=pop();
						j++;
					}
					push(symbol);
				}
			}
		}
	}
}
while(stack[top]!='#'){
	postfix[j]=pop();
	j++;
}
postfix[j]='\0';
}

int stack_int[50];
int top_int=-1;
void push_int(int item){
	stack_int[++top_int]=item;
}
char pop_int(){
	return stack_int[top_int--];
}
int main(){
	char infix[50],postfix[50];
	cout<<"use '+', '-', '*','/','$' (for exponentation)"<<endl;
	cout<<"enter infix expression"<<endl;
	cin>>infix;
	convert(infix,postfix);
	cout<<"infix expression is:"<<endl<<infix<<endl;
	cout<<"postfix expression is"<<endl<<postfix<<endl;
	return 0;
}