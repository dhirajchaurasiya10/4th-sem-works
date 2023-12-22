#include<iostream>
#include<conio.h>
#include<cmath>
#define F(x) ((2*x*x*x)+(4*x)-10)

using namespace std;

int main(){
	double x0,x1,x2;
	int count,i;
	
	cout<<"enter x0"<<endl;
	cin>>x0;
	cout<<"enter x1"<<endl;
	cin>>x1;
	cout<<"enter the counter"<<endl;
	cin>>count;
	i=1;
//	cout<<"iteration: \t"<<endl;
	while(i<=count){
		x2=(x0*F(x1)-x1*F(x0))/(F(x1)-F(x0));
		cout<<i<<"\t"<<x0<<"\t"<<x1<<"\t"<<x2<<endl;
		x0=x1;
		x1=x2;
		i++;
	}

}

