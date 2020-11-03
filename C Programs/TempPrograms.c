#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *Start,*tail=NULL;
struct node * createNode(int d)
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=d;
	n->next=NULL;
	if(Start==NULL)
	{
		Start=n;
		tail=n;
	}
	else
	{
		tail->next=n;
		tail=n;
	}
}
	void showdata()
	{
		struct node *temp=Start;
		if(temp==NULL)
		{
			printf("Linked List is empty");
		}else
		{
			while(temp!=NULL)
			{
				printf("%d",temp->data);
				temp=temp->next;
				
			}
			printf("\n");
		}
	}
int main()
{
	createNode(1);
	createNode(2);
	showdata();
}
