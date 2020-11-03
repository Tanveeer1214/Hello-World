/* Doubly Linked List */
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev; 
};

struct node *start,*tail=NULL;

struct node* createNode(int data)
{
	struct node *t,*n;
	t=(struct node *)malloc(sizeof(struct node));
	t->data=data;
	t->next=NULL;
	t->prev=NULL;
	if(start==NULL)
	{
		start=t;
		tail=t;
	}
	else
	{
		n=tail;
		tail->next=t;
		tail=t;
		tail->prev=n;
		n=tail;
	}
}

struct node* deleteNode()
{
	struct node *d,*a,*b;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		d=start->next;
		a=d->next;
		b=a->next;
		d->next=b;
		b->prev=d;
		free(a);
		
	}
}

struct node* insertNode(int data)
{
	struct node *m,*n,*o;
	m=(struct node *)malloc(sizeof(struct node));
	m->data=data;
	m->next=NULL;
	m->prev=NULL;
	n=start->next;
	o=n->next;
	if(start==NULL)
	start=m;
	else
	{
	   n->next=m;
	   m->prev=n;
	   m->next=o;
	   o->prev=m;
	}
}

struct node displayNode()
{
	struct node *temp=tail;
	if(temp==NULL)
	printf("\nList is Empty");
	else
	{
		while(temp!=NULL)
		{
			printf("\n%d",temp->data);
			temp=temp->prev;
		}
	}
}
main()
{
	createNode(1);
	createNode(2);
	createNode(4);
	createNode(5);
	insertNode(3);
	deleteNode();
	displayNode();
}
