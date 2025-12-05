//searching a number in array
#include<stdio.h>
void main()
{
	int n, i,a[100],search,flag=0;
		printf("enter the no of elements ");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search");
	scanf("%d",&search);
	for (i=0;i<n;i++)
	{
		if(search==a[i])
		{
			flag=1;
		}
		
	}
	if(flag==1)
	printf("Element is present in array");
	else
	printf("Element not present in array");

}
