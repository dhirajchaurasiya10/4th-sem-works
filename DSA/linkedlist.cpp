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
	
	current=malloc(sizeof(struct node));
	current->data=	3;
	current->link=NULL;
	head->link->link=current;
}