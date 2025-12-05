//searching a number in an array
#include<stdio.h>
void main()
{
	int a[100],n,i,flag=0,search,temp;
	printf("Enter the no of element ");
	scanf("%d",&n);
	printf("Enter the element of array");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
     printf("Enter the element for search");
     scanf("%d",&search);
     //searching
     for(i=0;i<n;i++)
     {
     	if(search==a[i])
     	{
     		flag=1;
		 }
	 }
	 if(flag==1)
	  printf("Element Present in array");
	  else
	  printf("Element Not Present in array");
     
 }
 
