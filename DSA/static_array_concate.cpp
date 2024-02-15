#include<iostream>
#include<conio.h>
using namespace std;
int a[4] = {2, 3, 4, 5};
int b[4] = {1, 6, 4, 10};
int c[8]; 
int lia = 0;
int lib = 0;
int la = 4; 
int lb = 4;
int main(){
	int k;
	while(k<la){
		c[k]=a[k];
		k+=1;
		cout<<k<<endl;
	}
	cout<<"value of k "<<k<<endl;
	int i=lib;
	while(i<lb){
		c[k]=b[i];
		k+=1;
		i+=1;
	}
	int x;
	while(x<(la+lb)){
		cout<<c[x]<<" ";
		x=x+1;
	}
}