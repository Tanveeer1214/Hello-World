#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *START,*tail=NULL;

struct node* createNode()
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	printf("Enter a number");
	scanf("%d",&n->data);
	n->next=NULL;
	if(START==NULL)
	{
		START=n;
		tail=n;
	}
	else
	{
		tail->next=n;
		tail=n;
	}
}
void deleteNode()
{
	struct node *r;
	if(START==NULL)
	{
		printf("List is Empty");
	}
	else
	{
		r=START;
		START=START->next;
		free(r);
		
	}
}
	
void displayNode()
{
	struct node *temp;
	temp=START;
	if(START==NULL)
	{
		printf("List is empty");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
			
		}
	}
}
int choice()
{
	int c;
	printf("1:Inseration in linked list\n");
	printf("2:Delete First Node in linked list\n");
	printf("3:Traversing in linked list\n");
	printf("4:Exit\n");
	printf("Enter your choice:");
	scanf("%d",&c);
	return(c);
}
void main()
{
	while(1)
	{
		system("cls");
	switch(choice())
	{
    case 1:
	createNode();
	break;
	case 2:
	deleteNode();
	break;
	case 3:
	displayNode();
	break;
	case 4:
	exit(0);
	default:
		printf("invalid choice");
    }
    getch();
    }
}

