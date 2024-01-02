#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
#include<iomanip>

float y(float x){
//	return 1/(1+x*x);
	return exp(x);
}
int main(){
	float a,b,h,s;
	int i,n;
	cout<<"enter lower limit"<<endl;
	cin>>a;
	cout<<"enter upper limit"<<endl;
	cin>>b;
	cout<<"enter the no of strips"<<endl;
	cin>>n;
	h=(b-a)/n;
	s=y(a)+y(b);
	for(i=1;i<=n-1;i++){
		s+= 2*y(a+i*h);
	}
	cout<<"value of integral is"<<(h/2)*s<<endl;
	return 0;
}