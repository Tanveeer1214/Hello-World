#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int arr[]={10,20,30,40}
	int t,temp,i;
	printf("Enter a number for search");
	scanf("%d",&t);
	for(i=0;i<=4;i++)
	{
		if(t==i)
		{
			printf("element found %d",i);
			break;
		}
	}
}
