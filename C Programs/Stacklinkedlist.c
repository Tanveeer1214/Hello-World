#include<stdio.h>
#include<stdlib.h>
struct StackList
{
	int data;
	struct StackList *next;
};

struct StackList *start;

struct StackList* createStack(int data)
{
	struct StackList *n,*t;
	n=(struct StackList *)malloc(sizeof(struct StackList));
	n->data=data;
	n->next=NULL;
	if(start==NULL)
	{
		start=n;
	}
	else
	{
		t=start;
		start=n;
		start->next=t;
	}
}

struct StackList* deleteList()
{
	struct StackList *temp,*a;
	if(start==NULL)
	printf("\nList is Empty");
	else
	{
		temp=start;
		start=temp->next;
		printf("\nPoped value is %d",temp->data);
		free(temp);
		
	}
}

struct StackList* displayStack()
{
	struct StackList *temp=start;
	if(temp==NULL)
	printf("\nStack is Empty");
	else
	{
			printf("\nStack Elements are\n");
		while(temp!=NULL)
		{
			printf("   %d",temp->data);
			temp=temp->next;
		}
	}
}
main()
{
	createStack(1);
	createStack(2);
	createStack(3);
	displayStack();
	deleteList();
	deleteList();
	deleteList();

}
