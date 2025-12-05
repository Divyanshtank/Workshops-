#include<stdio.h>
void main()
{
	int a=10;
	printf("value of a= %d\n",a);//10
	printf("Addres of a = %u\n",&a);//
	
	int *p =&a;
	printf("value of p (Address of a) =%u\n",p);
	printf("value of a through p = %d\n",*p);//10
	printf("Addresh of p =%\n",&p);//
	
	int **q =&p;
	printf("value of q (Addresh of p) = %u\n",q);
	printf("value of p (through of q) = %u\n",*q);
	printf("value of a (through of q) = %d\n",**q);
	
}
