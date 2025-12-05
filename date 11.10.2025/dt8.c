#include<stdio.h>
void main()
{
  int a[100][100],i,j,r,c,sum=0;
  printf("Enter the size of row and col");
  scanf("%d%d",&r,&c);
  if(r==c)
  {
  
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
  		//if(i==j)
  		if(i+j==r-1)
  		{
  			sum+=a[i][j];
		}				  
    }
    
	  printf("\n");
}
  printf("Sum of digonal element = %d",sum);
  
  }
   else
   printf("Invalid Matrix!!!");
}
