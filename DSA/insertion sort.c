	// insertion sort in array
#include <stdio.h>
void inssort(int a[],int size)
{
    int temp,i,j;
    //{5,2,4,6,3,8,7}
    for(i=0;i<size;i++)//1<7
    {
        temp=a[i];//temp=2
        j=i-1;//j=0
        while(j>=0 && temp<a[j])//0>=0 && 2<5
        {
            a[j+1]=a[j];//a[1]=5
            j--;//-1
        }
        a[j+1]=temp;//a[0]=2
    }
}
void main()
{
    int a[] = {5,2,4,6,3,8,7},i;
    int size = sizeof(a)/sizeof(a[0]);
    inssort(a,size);
    for(i=0;i<size;i++)
    {
    	printf("%d\t",a[i]);
	}
}
