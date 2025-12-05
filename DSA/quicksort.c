//quick sort
#include<stdio.h>
void qs(int a[],int first,int last)
{
	int pv,temp,i,j;
	if(first<last)
	{
		pv=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pv])
			{
				i++;
			}
			while(a[j]>a[pv])
			{
				j--;
			}
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pv];
		a[pv]=a[j];
		a[j]=temp;
		qs(a,first,j-1);
		qs(a,j+1,last);
	}
}
int main()
{
	int a[100],n,i;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("Enter the element of array\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qs(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
