#include<iostream>
#include<conio.h>
#define max 5
using namespace std;
int front=-1;
int rear=-1;

int item[max];

void enq(int x){
	if(front==((rear+1)%max)){
		cout<<"queue is overflow"<<endl;
	}
	else if(front==-1 || rear==-1){
			front=0;
			rear=0;
		}
	else {
			item[rear]=x;
			rear=(rear+1)%max;
			cout<<x<<" added to queue"<<endl;
		}
}

void deq() {
	if(front==-1){
		cout<<"queue is underflow"<<endl;
	}
	else if(front==rear){
		front=-1;
		rear=-1;		
	}
	else {
		front=(front+1)%max;
	}
}

void display(){
	cout<<"displaying queue"<<endl;
	for(int i=front;i<=((rear+1)%max);i++){
		cout<<item[i]<<endl;
	}
}

int main(){
	enq(5);
	enq(3);
	enq(4);
	enq(9);
	display();
	
}