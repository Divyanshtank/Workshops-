//TWO DIMENSIONAL ARRAY
// IT CONSISTS OF ROWS AND COLUMNS
//EX; MATRIX
//WORKS ON BASIS OF INDEXS
//ROW(INDEX)--> 0 --> ROW -1
//COLUMN(INDEX)-->0-->COLUMN-1
//** 2d ARRAY : INPUT OR OUTPUT
#include<stdio.h>
void main()
{
	int a [100][100],i,j,r,c;
	printf("enter the size of rows and columns");
	scanf("%d%d",&r,&c);
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
		}
		printf("\n");
	}
}
