//circular queue
#include<stdio.h>
#define size 10
int q[size];
int r=-1,f=-1,data;
void enqueue()
{
	printf("Enter a data");
	scanf("%d",&data);
	//full or not
	if((r+1)%size==f)
	{
		printf("Queue is full !!!!");
	}
	else if(r==-1 && f==-1)
	{
		r=f=0;
		q[r]=data;
	}
	else
	{
		r=(r+1)%size;
		q[r]=data;
	}
}
void dequeue()
{
  if(f==-1&& r==-1)	
  printf("Queue is empty!!!!");
  else if(r==f)
  {
  	data=q[f];
  	printf("deleted data =%d",data);
	f=r=-1;  
  }
  else
  {
  	data=q[f];
  	printf("Deleted data = %d",data);
  	
  }
}
void display()
{
	if(r==-1 && f==-1)
	printf("Queue is empty !!!");
	else
	{
		int i=f;
		do
		{
			printf("%d\t",q[i]);
			i=(i+1)%size;
		}
		while(i!=(r+1)%size);
	}
}
void main()
{ 
    int ch; 
    while(1)
    {
	printf("\npress 1 to insert data in circular queue\n");
	printf("\npress 2 to display data in circular queue\n");
	printf("\npress 3 to dequeue data in circular queue\n");
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
	  	}
	  }
}
