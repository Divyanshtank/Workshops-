//binary search
#include<stdio.h>
void search(int a[],int first,int last)
{
 int mid,f=0,data;
 printf("Enter a data ");
 scanf("%d",&data);
 while(first<=last)
 {
 	mid = (first+last)/2;//1
 	if(data==a[mid])//20==a[4]
	 	 {
		  
	 f=1;
	 break;	
}
    else if(data>a[mid])//20>50
    {
    	first=mid+1;
	}
	else
	{
		last=mid-1;//4-1=3
	}
}
if(f==1)
printf("element is present in array at index [%d]",mid);
else
printf("element is not present in array");
}


void main()
{
	int a[]={10,20,30,40,50,60,70,80,90,100};
	int size=sizeof(a)/sizeof(a[0]);
	search(a,0,size-1);
}
