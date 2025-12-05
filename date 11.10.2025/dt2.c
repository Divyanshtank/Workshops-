//WAP to reverse a array

#include<stdio.h>
void main()
{
	int a[100],n,i,temp;
	printf("Enter the no of elements ");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//loop to reverse an array
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
		
}
    //print the revese array
    printf("\nDisplay the element of reverse array\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
		
	}
