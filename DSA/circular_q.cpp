#include<iostream>
#include<conio.h>
#define max 5
using namespace std;
int front=-1;
int rear=-1;

int item[max];

void enq(int x){
    if((front==0 && rear==max-1)||front==rear+1){
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
//        item[rear]=x;
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
    for(int i=front;i<=rear;i++){
        cout<<item[i]<<" ";
    }
    int i=front;
    if(front>rear){
    do{
        cout<<item[i]<<" ";
        i=(i+1)%max;
    }while(i!=front);
    }
    cout<<endl;
    cout<<"Front : "<<front<<"  Rear : "<<rear<<endl;
}

int main(){
    enq(10);
    enq(3);
    enq(4);
    enq(9);
    display();
    deq();
    display();
}
