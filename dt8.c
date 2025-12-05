//write a program to find a sum of the element of even index and print of odd index
#include<stdio.h>
void main()
{
	int a[100],n,i,sum=0;
	printf("Enter the no of element");
	scanf("%d",&n);
	printf("Enter the element of array");
	for (i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	printf("\nDisplay the element of array\n");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		sum=sum+a[i];	
		}
		else
		{
			printf("%d\t",a[i]);  
		}
	  }
		printf("\nsum = %d",sum);
	}
	

