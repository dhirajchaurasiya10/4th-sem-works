#include<iostream>
#include<conio.h>
#include<cmath>
#define F(x) (x*x*x-9*x+1)
#define dF(x) (3*x*x-9)
using namespace std;

int main(){
	int i;
	float x0,x1,x2,f0,f1,diff;
	cout<<"enter the value of x0"<<endl;
	cin>>x0;
	
	do{
		f0=F(x0);
		diff=dF(x0);
		x1=x0-(f0/diff);
		f1=F(x1);
		x0=x1;
		i++;
		cout<<"no of iteration:\t "<<i;
		cout<<"\troot:"<<x1;
		cout<<"\tvalue of function:"<<f1<<endl;
		
	}while(fabs(f1)>0.001);
}

