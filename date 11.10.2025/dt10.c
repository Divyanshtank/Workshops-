//Multiplications of two matrix
//WAP to add two matrix
#include<stdio.h>
void main()
{
	int a [100][100],b[100][100],mul[100][100],i,j,k,r1,c1,r2,c2;
	printf("enter the size of row1 and columns1");
	scanf("%d%d",&r1,&c1);
	printf("enter the size of row2 and columns2");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Invalid Matrix!!!");
	}
	else
	{
	printf("Enter the elements for matrix1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
}
		printf("Enter the elements for matrix2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	//multiplication two matrix
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c1;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\nDisplay the elements of resultsnt matrix2\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			print("%d\t",mul[i][j]);
		}
	}
}
	
	
	
	
	
