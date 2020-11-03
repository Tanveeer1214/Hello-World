#include<stdio.h>				
#include<stdlib.h>
struct node  // define node what you want to in node
{
	int data;// varaible for data
	struct node *next;// variable for point to next node
};

  struct node *START,*tail=NULL;	// create start pointer and assign null value
  struct node * createNode(int data)// create function for create new node
  {
  	 struct node *n;// create pointer for hold new node address
     n=(struct node *)malloc(sizeof(struct node));// using malloc function for reserve meomery block for node
	 n->data=data;// assign data in likend list by passing arguments
	 n->next=NULL;// assign null value in next pointer because we can add other node 
  
  	if(START==NULL)// this block use for if start pointer is null then assign node with start pointer then start will point new node
  	{
  		START=n;
  		tail=n;
	}
	else// this block use for if start pointer is not a null then assign new node with tail pointer then tail pointer will point new node then tail next pointer will be null because tail point to last node
	{
		tail->next=n;
		tail=n;
	}
  }
  void display()// this function use for display nodes
  {
  	struct node *temp=START;
  	if(START==NULL)
  	{
  		printf("List is empty\n");
	}
	printf("Nodes of singly linked list:\n");
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
  }
  
int main()
{
	createNode(1);//assign value in first node 
	createNode(2);// then second
	createNode(3);// then third
	createNode(4);// then fourth
	display();// calling function 
}
