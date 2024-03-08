#include<iostream>
#include<conio.h>
using namespace std;
#define max 5
int ui, item, arr[max],n;
int main() {
	cout<<"enter no of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	while(ui<n){
		cin>>item;
		ui+=1;
		arr[ui]=item;
	}
	
	cout<<"enter the element to be added"<<endl;
	cin>>item;
	while(ui==max-1){
		arr[ui]=item;
		ui+=1;
	}
	
	for(int i=0;i<max;i++){
		cout<<"all the elements"<<arr[i]<<endl;
		
	}
}
