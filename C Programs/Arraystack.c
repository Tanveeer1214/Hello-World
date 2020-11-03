#include<stdio.h>
#include<stdlib.h>
struct ArrayStack
{
	int top;
	int capacity;
	int *array;
};

struct ArrayStack* createStack(int cap)
{
	struct ArrayStack *stack;
	stack=malloc(sizeof(struct ArrayStack));
	stack->top=-1;
	stack->capacity=cap;
	stack->array=malloc(sizeof(int)*stack->capacity);
	return(stack);
}
int Empty(struct ArrayStack *stack)
{
	if(stack->top==-1)
	return(1);
	else
	return(0);
}

int push(struct ArrayStack *stack,int data)
{
	if(stack->array[stack->top]==stack->capacity-1)
	printf("\nStack is Full");
	else
	{
		stack->top++;
		stack->array[stack->top]=data;
		printf("\n %d",stack->array[stack->top]);
	}
}

int pop(struct ArrayStack *stack)
{
	int temp;
	if(!Empty(stack))
	{
		temp=stack->array[stack->top];
		stack->top--;
		//printf("\n Poped value is %d",temp);
		return(temp);
	}
	return(-1);
}

main()
{
	struct ArrayStack *stack;
	int item,c;
	stack=createStack(4);
	while(1)
	{
		system("cls");
		printf("\n1:Push");
		printf("\n2:Pop");
		printf("\n3:Exit");
		printf("\nEnter your choice");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nEnter a number");
				scanf("%d",&item);
				push(stack,item);
				break;
			case 2:
				item=pop(stack);
				if(item==-1)
				printf("\nStack is Empty");
				else
				printf("\nPoped value is %d",item);
				break;
			case 3:
				exit(0);
		}
		getch();
	}
		
}
