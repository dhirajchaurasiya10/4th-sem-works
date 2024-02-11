#include<iostream>
#include<conio.h>
using namespace std;
int front=0;
int rear=-1;
float queue[50];
void push(int n){
	if(rear==n-1){
		cout<<"queue is full"<<endl;
	}
	else {
		rear+=1;
		queue[rear]=n;
	}
}
void display(){
	int i;
	cout<<"queue items "<<endl;
	for(i=front;i<=rear;i++){
	cout<<queue[i]<<endl;
}
}
void pop(){ 
    if(front>rear){
        cout<<"Queue underflow!!!"<<endl;
}
    else{
        cout<<"Element deleted from queue :"<<queue[front]<<endl;
        front+=1;
    }
    
}
int main(){
    cout<<"Queue Program"<<endl;
    push(3);
    push(5);
    push(6);
    display();
    pop();
    display();
}
