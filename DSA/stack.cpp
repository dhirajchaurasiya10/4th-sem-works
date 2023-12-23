#include<iostream>
#include<cmath>
#define max 5
using namespace std;

int arr[max];
int first = -1;

void push(int data){
	int i;
	first+=1;
	cout<<"push: ";
	for(i=first;i>0;i--){
		arr[i]=arr[i-1];
		arr[0]=data;
		cout<<arr[0]<<endl;
	}
}

int pop(){
	int i,value;
	value=arr[0];
	for(i=0;i<first;i++){
		arr[0]=arr[i+1];
		first-=1;
	}
	return value;
}

void print()
	{
		int i;
		if(first=-1){
			cout<<"stack underflow"<<endl;
		}
		else {
			cout<<"ater pop"<<endl;
			for(i=0;i<=first;i++){
				cout<<arr[i]<<endl;
			}
		}
	}
int main(){
//	int data;
	push(3);
	push(9);
//	data = pop();
}
