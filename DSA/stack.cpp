#include<iostream>
#define max 5
using namespace std;

int arr[max];
int first = -1;

void push(int data){
    if(first == max - 1){
        cout << "Stack overflow\n";
        return;
    }
    
    first++;
    arr[first] = data;
}

int pop(){
    if(first == -1){
        cout << "Stack underflow\n";
        return -1; // Assuming -1 as an error code for underflow
    }
    
    int value = arr[first];
    first--;
    return value;
}

void print(){
    if(first == -1){
        cout << "Stack is empty\n";
        return;
    }
    
    cout << "After pop:\n";
    for(int i = 0; i <= first; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    push(3);
    push(9);
    print();
    
    int data = pop();
    cout << "Popped value: " << data << endl;
    print();
    
    return 0;
}
