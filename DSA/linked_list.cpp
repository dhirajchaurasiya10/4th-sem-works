#include<iostream>
#include<conio.h>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
void display(node* &head)
{
	node*ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
void insertathead(node*&head,int key)
{

//	cout<<"enter the data"<<endl;
    node* ptr=new node(key);
    ptr->next=head;
    head=ptr;
}

void insertatlast(node* &head, int key){
	node*ptr=head;
	node* last=new node(key);
	last->data=key;
	last->next=NULL;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	ptr->next=last;
}
int main()
{
	node* head=new node(6);
		node* first=new node(7);
	    head->next=first;
	    display(head);
	    insertathead(head,9);
	    insertathead(head,10);
	    insertathead(head,15);
	    insertathead(head,9);
	    insertathead(head,16);
	    insertatlast(head,80);
	    display(head);
	}