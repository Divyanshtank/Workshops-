//WAP to reverse a array using pointer:

#include<stdio.h>
void main()
{
	int i,temp;
	int a[]={1,2,3,4,5},*start,*end;
	int size= sizeof(a)/sizeof(a[0]);
	start =a;
	end = a+size-1;
	while(start<end)
	{
		temp=*start;
		*start =*end;
		*end = temp;
		start++;
		end--;
	}
	//print the revese array
	printf("Reversed array = \n");
	for (i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
