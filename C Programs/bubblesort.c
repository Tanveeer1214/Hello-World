void main()
{
  //int arr[1];
  int j,i,temp,a,l,e,s,k;
  printf("Enter the size of Array");
  scanf("%d",&a);
  int arr[a];
  printf("Enter elements in array");
  for(l=0;l<=a;l++)
  {
    scanf("%d",&arr[l]);
    
  }
  for(j=0;j<=a;j++)
  {
    for(i=0;i<=a-1;i++)
    {
     if(arr[i]>arr[i+1])
      {
       temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
      }
   }
}
for(i=0;i<=a;i++)
{
  printf("%d",arr[i]);
}

printf("\nEnter a number for search");
scanf("%d",&s);
 for(j=0;j<=a;j++)
  {
    for(i=0;i<=a;i++)
    {
     if(arr[i]==s)
      {
       k=arr[i];
       printf("\nelement found %d",k);
       exit(0);
      }
      else if(arr[i]!=s)
      {
      	printf("\nelement not found");
      	exit(0);
	  }
   }
}
/*for(i=0;i<=a;i++)
{
  printf("%d",arr[i]);
}*/
}
