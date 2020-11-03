#include<stdio.h>
#include<stdlib.h>
struct QeueArray
{
	int front;
	int rear;
	int capacity;
	int *array;
};

struct QeueArray* createQeue(int cap)
{
	struct QeueArray *q;
	q=malloc(sizeof(struct QeueArray));
	q->front=-1;
	q->rear=-1;
	q->capacity=cap;
	q->array=malloc(q->capacity*sizeof(int));
	return(q);
}

int insertQeue(struct QeueArray *q,int data)
{
	if(q->array[q->front]==q->capacity-1)
	printf("\nQeue is Full");
	else
	{
		q->front++;
		q->array[q->front]=data;
		printf("%d",q->array[q->front]);
	}
}

int deleteQeue(struct QeueArray *q)
{
	int t;
	if(q->array[q->front]==-1)
	printf("\nQeue is Empty");
	else
	{
		t=q->array[q->front];
		q->front--;
		//free(t);
	}
}

main()
{
	struct QeueArray *q;
	createQeue(4);
	insertQeue(q,12);
	insertQeue(q,14);
    deleteQeue(q);
}
