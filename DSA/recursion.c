// Factorial using recursion
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	   return 1;
	 else
	 {
	 return	n*fact(n-1);
	   }  
}
void main()
{
 printf("factorial = %d",fact(5));
 
}
