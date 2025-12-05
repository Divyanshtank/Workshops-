//pointer operation
#include<stdio.h>
void main()
{
	int a[] = {10,24,34,54,85,10,19,10};
	int *p = &a[5];
	int *q = &a[7];
	
	printf("%d =\n ",*p++);//85
	printf("%d =\n ",*p);//19
	printf("%d =\n= ",*(--q) );
}
