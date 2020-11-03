#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct QueueArray
{
	int front;
	int rear;
	int capacity;
	int *array;
};

struct QueueArray* createQueue(int cap)
{
	struct QueueArray *n;
	n=malloc(sizeof(struct QueueArray));
	n->capacity=cap;
	n->front=-1;
	n->rear=-1;
	n->array=malloc(sizeof(int)*n->capacity);
	return(n);
}

int enQueue(struct QueueArray *n,int data)
{
	if(n->rear==n->capacity-1)
	printf("\nOverFelow");
	else
	{
		n->front=0;
		n->rear++;
		n->array[n->rear]=data;
		printf("\nInserted element is %d",n->array[n->rear]);
	}
}
int main()
{
	struct QueueArray *n;
	createQueue(4);
	enQueue(n,4);
	enQueue(n,3);
}
