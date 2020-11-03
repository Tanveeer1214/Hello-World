#include<stdio.h>
#include<stdlib.h>
/* this function use for define a Bst Node*/
struct Bst
{
	int data;
	struct Bst *right;
	struct Bst *left;
};

/*create a Root pointer which hold address of first node*/
struct Bst *Root=NULL;

/* this function use for create node and insert node */
struct Bst* insertBst(int data)
{
	struct Bst *n,*t;
	n=malloc(sizeof(struct Bst));
	n->left=NULL;
	n->data=data;
	n->right=NULL;
	if(Root==NULL)
	Root=n;
	else
	{
		t=Root;
		while(t->left||t->right!=NULL)
		{
			if(n->data<t->data)
			{
			   //t=t->left;
			   if(t->left==NULL)
			   {
			 	t->left=n;
		       }
		       else
		       t=t->left;
		    } 
			else
			{ 
			    t=t->right;
			    if(t->right==NULL)
			    {
			    t->right=n;
			    }
			}
	   }
    }
}

/* this function use for find element in Bst Tree*/
int FindBst(struct Bst *n,int f)
{
	struct Bst *temp;
	temp=Root;
	if(temp==NULL)
	printf("\nTree is Empty");
	else
	{
		if(temp->data==f)
		printf("Element Found %d",temp->data);
		else
		{
		while(temp->data!=f)
		 {
		   
		   if(f<temp->data)
		   temp=temp->left;
		   else
		   temp=temp->right;
		   
		   if(temp->data==f)
		   {
		   	printf("Element Found %d",temp->data);
		   }
    	 }
       }
		
		
    }
}

/* this function use for find element and delete it*/
int DeleteBst(struct Bst *n,int data)
{
	struct Bst *temp;
	int a;
	temp=Root;
	if(temp==NULL)
	printf("\nTree is Empty");
	else
	{
		while(temp->data!=data)
		{
		   if(temp->data==data)
		   printf("Element Found %d",temp->data);
		   else if(data<temp->data)
		   temp=temp->left;
		   else
		   temp=temp->right;
		   
		   if(temp->data==data)
		   {
		   	a=temp->data;
		   	printf("Deleted Element is %d",a);
		   	//delete(a);
		   }
    	}
		
		
    }
	
}

int main()
{
	struct Bst *Root;
	int c,temp,d;
    while(1)
    {
    	system("cls");
    	printf("\n1:Insertion in Bst");
    	printf("\n2:Searching in Bst");
    	printf("\n3:Deletation in Bst");
    	printf("\n4:Exit");
    	printf("\nEnter your choice:");
    	scanf("%d",&c);
    	switch(c)
    	{
    		case 1:
    			printf("\nEnter a Number:");
    			scanf("%d",&temp);
    			insertBst(temp);
    			break;
    		case 2:
    			printf("\nEnter a Number:");
    			scanf("%d",&temp);
    			FindBst(Root,temp);
    			break;
    		case 3:
    			printf("\nEnter a number:");
    			scanf("%d",&d);
    			DeleteBst(Root,d);
    			break;
    		case 4:
    			exit(0);
    			
    	}
		getch();
	}
}	
