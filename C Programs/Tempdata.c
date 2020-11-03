#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int t,temp,i,j;
	printf("Enter the size of array\n");
	scanf("%d",&t);
	int arr[t];
	printf("\nEnter elements in array");
	for(i=0;i<=t-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<=t-1;j++)
	{
		printf("%d",arr[j]);
	}
}
