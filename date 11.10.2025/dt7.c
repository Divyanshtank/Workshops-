//2d array
//IT consist of row and columns
//ex: matrix
//works on basis of indexs
//row(index)--> 0 --> -1
// column(index)
	#include<stdio.h>
	void main()
	{
	  int a[100][100],i,j,r,c;
	  printf("Enter the size of row and col");
	  scanf("%d%d",&r,&c);
	  printf("Enter the element for matrix\n");
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		scanf("%d",&a[i][j]);
		  }
	  }
	  printf("\nDisply the element of array\n");
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		printf("%d\t",a[i][j]);
		  }
		  printf("\n");
	  }
	}
