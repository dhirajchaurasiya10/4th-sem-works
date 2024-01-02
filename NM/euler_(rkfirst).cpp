#include<iostream>
#include<conio.h>
#include<cmath>
#define df(x) ((3*x*x)+1)
using namespace std;
int main(){
	float x0,y0,h,y1,x1,x2;
	int i;
	cout<<"enter the value of x0"<<endl;
	cin>>x0;
	cout<<"enter the value of y0"<<endl;
	cin>>y0;
	cout<<"enter the value of h"<<endl;
	cin>>h;
	cout<<"enter the value of x2"<<endl;
	cin>>x2;
	for(i=0;i<x2;i++){
		y1=y0+h*df(x0);
		x1=x0+h;	
		y0=y1;
		x0=x1;
	}
	cout<<"the result is"<<y1;
}