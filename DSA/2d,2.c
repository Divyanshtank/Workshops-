//WAP to add two matrix
#include<stdio.h>
void main()
{
	int a [100][100],b[100][100],sum[100][100],i,j,r1,c;
	printf("enter the size of rows and columns");
	scanf("%d%d",&r,&c);
	printf("Enter the elements for matrix1\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
		printf("Enter the elements for matrix2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("\nDisplay the elements of matrix1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
	}
			printf("\n");
		}
	
		printf("\nDisplay the elements of matrix2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",a[i][j]);
	}
			printf("\n");
		}
	
	// loop to addition of two matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nDisplay the elements of resultsnt matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
	}
			printf("\n");
		}
	}
			
		
	
