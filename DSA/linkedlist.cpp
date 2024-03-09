#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node {
	int data;
	struct node *link;			//reallocation
};	
struct node *head,*current;

int main(){

	head = (struct node*)malloc(sizeof(struct node));
	head->data=45;
	head->link=NULL;
	

	current = (struct node*)malloc(sizeof(struct node));
	current->data=98;
	current->link=NULL;
	head->link=current;
	
	cout<<head->data<<endl<<head->link;
	cout<<endl<<current->data<<endl<<current->link<<endl;
	

	cout<<head->link->link; 	//this will give the same output as like line 25.
}