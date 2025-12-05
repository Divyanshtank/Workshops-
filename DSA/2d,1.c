//sum of diagonal elements
#include<stdio.h>
void main()
{
	int a [100][100],i,j,r,c,sum=0;
	printf("enter the size of rows and columns");
	scanf("%d%d",&r,&c);
	if(r==c)
	{
	printf("Enter the elements for matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("\nDisplay the elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		//	if(i==j)
		if(i+j==r-1)
			{
				sum+=a[i][j];
			}
			}
			printf("\n");
		}
		printf("Sum of diagonal elements=%d",sum);
	}
	else
	printf("Ivalid Matrix!!!");
}
