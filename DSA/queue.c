//Linear queue operation
#include<stdio.h>
#define size 10
int q[size];
int r=-1,f=-1,data;
void enqueue()
{
 printf("Enter the data");
 scanf("%d",&data);
 //is full
 if(r==size-1)
 {
 	printf("Queue is full!!!!");
 }
 else if(r==-1&& f==-1)
 {
 	r=f=0;
 	q[r]=data;
 }
 else
 {
 	r=r+1;
 	q[r]=data;
 }
}
void dequeue()
{
  if(r==-1 && f==-1)
  printf("queue is empty!!!!");
  else if(r==f)
  {
   data=q[f];
   printf("Deleted element=%d",data);
   f=r=-1;
  }
  else
  {
   data=q[f];
   printf("deleted data = %d",data);
   f=f+1;
  }
}
void peek()
{
 if(r==-1 && f==-1)
  printf("queue is empty!!!!");
  else
  {
  	printf("first element is =%d",q[f]);
  }
}
void display()
{
 if(r==-1&&f==-1)
 printf("Queue is empty!!");
 else
 {
 	int i;
 	for(i=f;i<=r;i++)
 	{
 		printf("%d%\t",q[i]);
	 }
 }
}

void main()
{
	int ch;
	while(1)
	{
		printf("\npress 1 to perform enqueue operation\n");
		printf("\npress 2 to perform display in a queue\n"); 
		printf("\npress 3 to perform dequeue operation\n");
		printf("\npress 4  to perform peek operation\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
		
		 
		 	case 1:
		 		    enqueue();
		 		    break;
		 	case 2:
		 		    display();
		 		    break;
		 	case 3:
		 			dequeue();
		 			break;
		 	case 4:
		 		    peek();
		 		    break;
		 		    
		 		}
	}
}
