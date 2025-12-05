//DMA :Malloc()
#include<stdio.h>
#include<stdlib.h>//to use standard library for malloc 
void main()
{
	int n,i,*ptr;
	printf("Enter the no of elements");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));//return void converted to int*
	
	printf("Enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("print the elements of array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
}
