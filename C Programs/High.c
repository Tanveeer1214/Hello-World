#include<stdio.h>
#include<stdlib.h>
struct ArrayStack
{
	int top;
	int capcity;
	int *Array;
};

struct ArrayStack* createStack(int cap)
{
	struct ArrayStack *stack;
	stack=malloc(sizeof(struct ArrayStack));
	stack->top=-1;
	stack->capcity=cap;
	stack->Array=malloc(sizeof(int)*stack->capcity);
	return(stack);
}
int isFull(struct ArrayStack *stack)
{
	if(stack->top==stack->capcity-1)
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
int isEmpty(struct ArrayStack *stack)
{
	if(stack->top==-1)
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
int push(struct ArrayStack *stack,int item)
{
	if(!isFull(stack))
	{
		stack->top++;
		stack->Array[stack->top]=item;
	}
}
int pop(struct ArrayStack *stack)
{
	int item;
	if(!isEmpty(stack))
	{
	item=stack->Array[stack->top];
	stack->top--;
	return(item);
    }
    return(-1);
}
main()
{
	int choice,item;
	struct ArrayStack *stack;
	stack=createStack(4);
	while(1)
	{
		system("cls");
		printf("\n1:Push");
		printf("\n2:Pop");
		printf("\n3:Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter a Number:");
			scanf("%d",&item);
			push(stack,item);
			break;
		case 2:
			item=pop(stack);
			if(item==-1)
			printf("\nList is Empty");
			else 
		    printf("\nPoped value is %d",item);
			break;
		case 3:
			exit(0);
	}
	getch();
  }
}
