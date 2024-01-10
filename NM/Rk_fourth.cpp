#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
//#define F(x) ((y*y-x*x)/(y*y+x*x))

float function(float x, float y){
	return ((y*y-x*x)/(y*y+x*x));
}

int main(){
	float y0,h,x0,x1,y1,m1,m2,m3,m4,y2;
	int i,n;
	cout<<"enter the value of x0"<<endl;
	cin>>x0;
	cout<<"enter the value of y0"<<endl;
	cin>>y0;
	cout<<"enter the value of h"<<endl;
	cin>>h;
	cout<<"enter the no of iterations to be done"<<endl;
	cin>>n;
	for(i=0;i<n;i++) {
		m1=function(x0,y0);
		m2=function((x0+h/2),(y0+(m1*h/2)));
		m3=function((x0+h/2),(y0+(m2*h/2)));
		m4=function((x0+h),(y0+(m3*h)));
		
		y1=y0+(m1+2*m2+2*m3+m4)/6*h;
		y0=y1;
		x1=x0+h;
		x0=x1;
		
		
	}
	cout<<"ans "<<y1;
}
