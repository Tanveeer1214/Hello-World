#include<stdio.h>
void main()
{
int size=4;
int arr[size]; int rear=-1; int front=-1;int item;int choice;int data;
    //printf("\n1:insertion in Queue");
    //printf("\n2:Deletion in Queue");
    //printf("\n3:Exit");
    //printf("\nEnter your choice");
    //scanf("%d",&choice);
	while(1)
	{
		system("cls");
	printf("\n1:insertion in Queue");
    printf("\n2:Deletion in Queue");
    printf("\n3:Exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
		switch(choice)
		{
	case 1:	
	if(front==size-1)
	printf("\n  overfelow");
	else
	{
		front=0;
		rear++;
		printf("\nEnter a number");
		scanf("%d",&data);
		arr[rear]=data;
		printf("\nInserted element is %d",arr[rear]);
	} 
	break;
	case 2:

		//item=front;
		//printf("\n Deleted element is %d",arr[front]);
		//front++;
		if(front==size-1)
		printf("\nunderflow");
		else
		{
			item=front;
			printf("\n Deleted element is %d",arr[front]);
		    front++;
		}
		break;
	case 3:
		exit(0);
	}
	getch();
   }
	

}
