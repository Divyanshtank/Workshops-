//WAP TO SORT ARRAY IN SELECTION SORT
#include<stdio.h>
void main()
{
	int a[100],n,i,j,temp;
	printf("Enter the no of element ");
	scanf("%d",&n);
	printf("Enter the element of array");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
	//sort an array
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//print the sorted array
	printf("\nDisplay the element of sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
