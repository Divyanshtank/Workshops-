//DMA : MALLOC ()
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr;
	printf("Enter the no of element");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",(ptr+i));
	}
 printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
     printf("%d\t",*(ptr+i));
    }
}


