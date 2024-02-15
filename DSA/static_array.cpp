#include<iostream>
#include<conio.h>
using namespace std;
#define size 8
int pos,i,data,arr[size],special;
int ui,li=-1;

void takedata(){
	cout<<"enter data for array arr"<<endl;
	cin>>arr[data];
	data+=1;
}

void display() {
	for(int i=0;i<size; i++) {
		cout<<arr[i]<<endl;
	}
}
int main() {
	for(i=0;i<size-1;i++){
		takedata();
	}
	
	cout<<"enter the data and it's position to be inserted at "<<endl;
	cin>>special>>pos;
	
	ui+=1;
	i=ui;
	while(i>=pos){
		arr[i+1]=arr[i];
		i=i-1;
	}
	arr[ui]=special;
	ui+=1;
	
	cout<<ui<<" "<<arr[ui]<<endl;
	cout<<endl<<"displaying the array"<<endl;

display();
}