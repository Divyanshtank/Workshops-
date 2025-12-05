//WAP TO sort an array using pointer 
#include<stdio.h>
void main()
{
	int *ptr a[]={11,32,13,4,15},n,i,j,temp;
	*ptr=a;
	//for loop an array
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
			temp=*(a+i);
			*(a+i)=*(a+j;)
			*(a+j)=temp;
		    }
		}
	}
	printf("Sorted array =\n")
}

