#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *start,*tail=NULL;

struct node* createNode(int data)
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->next=NULL;
	if(start==NULL)
	{
		start=n;
		tail=n;
	}
	else 
	{
		tail->next=n;
		tail=n;
	}
}

struct node* insertNode(int data)
{
	struct node *r,*s,*z;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		r=(struct node *)malloc(sizeof(struct node));
		s=start->next;
		r->data=data;
		r->next=NULL;
		z=s->next;
		s->next=r;
		r->next=z;
	}
}

struct node deleteNode()
{
	struct node *t,*y;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		t=start->next;
		y=t->next;
		t->next=y->next;
		start->next=t;
		free(y);
	}
}

struct node displayNode()
{
	struct node *temp=start;
	if(temp==NULL)
	printf("\nList is Empty");
	else
	{
		while(temp!=NULL)
		{
		printf("%d",temp->data);
		temp=temp->next;		
	    }
	}
}
int main()
{
	createNode(1);
	createNode(2);	
	createNode(4);	
	createNode(5);
	insertNode(3);
	deleteNode();
	displayNode();
}






