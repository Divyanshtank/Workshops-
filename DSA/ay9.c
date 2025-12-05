//write a program to find the sum of elements on even index and print elements of odd index
#include<stdio.h>
void main()
{
  int a [100],n,i,sum=0;
  printf("enter the no of elements");
  scanf("%d",&n);
  
  printf("enter the elements of array");
  for(i=0;i<n;i++)
  {
  	scanf("%d,&a[i]");
  }
  printf("\nDisplay the elements of array\n");
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
  {
  	printf("\nsum= %d",sum);
  }
}
