//WAP to find unique element in aray
#include<stdio.h>
void main()
{
	int a[100],n,i,j,k,c;
	printf("enter the no of elements ");
	scanf("%d",&n);
	printf("Enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//loop to find unique elements in array
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0,k=n;j<k+1;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					c++;
				}
			}
		}
		if(c==0)
		printf("%d\t",a[i]);
		
	}
	}
