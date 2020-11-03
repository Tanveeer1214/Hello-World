#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a,temp,b,s,p,t=1214;
	int x,y,z,w;
	char n;
	printf("*****************************\n");
	printf("       Login Portal\n");
	printf("*****************************\n");
	printf("Please Enter your name\n");
	scanf("%s",&n);
	printf("_____________________________\n");
	printf("\nplease Enter your Password\n");
	scanf("%d",&p);
	printf("*****************************\n");
	if(p==t)
	{
		printf("    Login Successfull\n");
	}
	else 
	{
		printf("       Wrong Password\n");
	printf("*****************************\n");
		exit(0);
	}
	printf("*****************************\n");
	printf("Wellcome to Array operations\n");
	printf("\n*****************************");
	printf("\nEnter the size of Array\n");
	scanf("%d",&s);
	int arr[s];
	printf("\nEnter elements in Array:\n");
	for(i=0;i<=s-1;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("\n*****************************");
	printf("\n\tArray elements");
	printf("\n*****************************\n");
	//printf("\nBefore deletation elements\n");
	for(i=0;i<=s-1;i++)
	{
		printf("  %d",arr[i]);
	}
    printf("\n*****************************\n");
    printf("    Select a operation");
    printf("\n*****************************");
	printf("\n1:Inseration and Deletation");
	printf("\n2:Bubble sorting in Array");
	printf("\nEnter your choice:");
	scanf("%d",&w);
	switch(w)
	{
	case 1:
	{	
	printf("\n*****************************");
	printf("\n    Deletation operation");
	printf("\n*****************************");
	printf("\nEnter a number for delete\n");
	scanf("%d",&a);
	printf("\nEnter a new number\n");
	scanf("%d",&b);
	for(j=0;j<=s-1;j++)
	{
	for(i=0;i<=j;i++)
	{
		if(arr[i]==a)
		{
			temp=arr[i];
			arr[i]=b;
			b=temp;
			free(temp);
		}
	}
   }
   printf("\n*****************************");
   printf("\n  After deletation elements ");
   printf("\n*****************************");
   printf("\nAfter deletation\n");
   for(i=0;i<=s-1;i++)
   {
   	printf("  %d",arr[i]);
   }
   printf("\n*****************************");
   printf("\n Deleted element from Array");
   printf("\n*****************************");
   printf("\n\nDeleted element is %d\n",b);
   break;
   }
   case 2:
   	{
   printf("\n*****************************");
   printf("\n  Bubble sorting in Array");
   printf("\n*****************************");
   for(x=0;x<=s-1;x++)
   {
   	for(i=0;i<=x;i++)
   	{
   		if(arr[i]>arr[i+1])
   		{
   			z=arr[i];
   			arr[i]=arr[i+1];
   			arr[i+1]=z;
   			free(z);
		}
    }
   }
   printf("\nAfter sorting in elements\n");
   for(i=0;i<=s-1;i++)
   {
   	printf("  %d",arr[i]);
   }
   printf("\n*****************************");
   printf("\n       <Good Luck>");
   printf("\n*****************************");
}
}
}
