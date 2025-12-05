//Multiplication of two matrix
#include<stdio.h>
void main()
{
	int i,j,k,r1,c1,r2,c2,a[100][100],b[100][100],mul[100][100];
		printf("enter the size of row1 and column1");
	scanf("%d%d",&r1,&c1);
		printf("enter the size of row2 and column2");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Invalid Matrix!!!");
	}else
	{
	
	printf("Enter the elements for matrix1\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
		printf("Enter the elements for matrix2\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
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
		//loop for multiplication
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				mul[i][j=0];
				for(k=0;k<c1;k++)
				{
					mul[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		printf("\ndisplay the element of resultant matrix2\n");
        for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++) 
	{
		printf("%d\t",mul[i][j]);
	}
	printf("\n");
}












    }  
























}
