//WAP to sort an array using pointer
#include<stdio.h>
void main()
{
	int temp, *start,i,j,a[4]={2,4,3,6};
	int size=sizeof(a)/sizeof(a[0]);
	start=a;
	//loop for sort 
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(start+i)>*(start+j))
			{
				temp=*(start+i);
				*(start+i)=*(start+j);
				*(start+j)=temp;
			}
		}
	}
	printf("sorted Array= \n");
}
