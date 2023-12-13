#include<iostream>
#include<conio.h>
#include<math.h>
#define F(x) (x*x*x-9*x+1)
using namespace std;

int main(){
	int i =1;
	float a,b,c,f;
	cout<<"enter values of a and b \t"<<endl;
	cin>>a>>b;
	
	do{
		c=(a+b)/2;
		f=F(c);
		cout<<"a=\t"<<a<<"b=\t"<<b<<"c=\t"<<c<<"f=\t"<<f<<endl;
		
		if(F(a)*F(c)<0){
			b=c;
		}
		else {
			a=c;
		}
		i++;
	}while(fabs(F(c))>0.001);
	cout<<"the root is"<<c<<endl;
}

