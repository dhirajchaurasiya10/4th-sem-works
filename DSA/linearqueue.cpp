// linear queue
#include<iostream>
#define max 4
using namespace std;

	
	int queue[max],front=0,rear=-1;
	
	//you can consider rear as if it moves based on the data items are entered 
	void enqueue(int data){
		if(rear==max-1){
			cout<<"queue is underflow"<<endl;
		}
		else {
			rear+=1;
			queue[rear]=data;
		}
	}
	
	void deque(){
		if(front>rear){
			cout<<"queue is underflow "<<endl;
		}
		else {
			cout<<"element deleted from queue"<<endl;
			front+=1;
			
		}
	}
	
	void print(){
					cout<<"displaying queue"<<endl;
		for(int i=front;i<=rear;i++){

			cout<<queue[i]<<endl;
		}
	}
	
	int main() {
		enqueue(5);
		enqueue(4);
		print();
		deque();
		print();
	}
