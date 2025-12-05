//WAP to find maximun element in array
#include<stdio.h>
void main()
{
	int  n,i,max,a[5]={10,20,30,40};
	for(i=0;i<5;i++)
	{
	if (a[i]>max)
	{
		max=a[i];
	}
	}
	printf("max element=%d",max);
	
}
