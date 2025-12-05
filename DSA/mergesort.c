//merge sorting
#include<stdio.h>
void merge(int arr[],int left,int right,int mid)
{
int i,j,k;
int n1 = mid-left+1;
int n2=right-mid;
int L[n1],R[n2];
for(i=0;i<n1;i++)
    L[i]=arr[left+i];
for(j=0;j<n2;j++)
R[j]=arr[mid+1+j];
i=0;
j=0;
k=left;
while (i<n1&& j<n2)
{
	if(L[i] <= R[j])
	   arr[k++]=L[i++];
	 else
	    arr[k++]=R[j++];  
	
		}	
		while(i<n1)
		arr[k++]=L[i++];
		while(j<n2)
		arr[k++]=R[j++];	
}
void mergesort(int arr[],int left,int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		mergesort(arr,left,mid,right);
	}
}
void printArray(int arr[],int size)
{   int i;
	for( i=0; i<size; i++)
	print("%d",arr[i]);
	printf("\n");
}
int main()
{ 
 int arr[]={38,65,24,36,15,254};	
 int size=sizeof(arr)/sizeof(arr[0]);
 
 printf("Original array :  \n");
 printArray(arr,size);
 
 mergesort(arr,0,size-1);
 
 printf("Sorted array : \n");
 printfArray(arr,size);
}
