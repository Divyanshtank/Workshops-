//pointer operation

#include<stdio.h>
void main()
{
	int i, a[5]={1,2,3,4,5},sum=0,sub=0;
	int *p=a;
	
	for(i=0;i<5;i++)
	{
		//printf("%d\t",*(p+i));
		if (i%2==0)
		{
			sum=sum+*(p+i);
		}
		else
		{
			sub=sub-*(p+i);
		}
	}
}
