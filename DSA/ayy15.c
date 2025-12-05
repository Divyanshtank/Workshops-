//WAP to reverse a array using pointers

#include<stdio.h>
void main()
{
	int i,a[100],temp,*start,*end ,n;
	printf("Enter the no of elements ");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    start=a;
     end=a+n-1;
	//loop to reverse an array
	while (start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
		}
    //print the revese array
    printf("\nReversed array= \n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
		
	}
