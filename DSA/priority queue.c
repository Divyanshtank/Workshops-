//priority queue implementation
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data,pn;
	struct node *next;
};

struct node *f=NULL;
void enqueue(int data,int pn)
{
	struct node *temp,*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->pn=pn;
	temp->next= NULL;
	if (f==NULL || pn<f->pn)
	{
		temp->next=f;
		f=temp;
    }
    else
    {
    	p=f;
    	while(p->next!=NULL && p->next->pn<= pn)
    	{
    		p=p->next;
		}
		 temp->next=p->next;
		 p->next=temp;
	}
}
void dequeue()
{
 if(f==NULL)
 printf("Queue is empty!!!!");
 else{
 	struct node *temp=f;
 	printf("deleted element : data =%d,priority=%d\n",temp->data,temp->pn);
 	f=f->next;
 	free(temp);
 }	
}
void display()
{
	struct node *temp=f;
	if(f==NULL)
	{
		printf("Queue is empty!!!!");
	}
	while(temp!=NULL)
	{
		printf("Priority : %d,data :%d\n",temp->pn,temp->data);
		temp=temp->next;
	}
}
int main()
{ 
    int a,data,pn; 
    while(1)
    {
	printf("\npress 1 to insert data in priority queue\n");
	printf("\npress 2 to display data in priority  queue\n");
	printf("\npress 3 to dequeue data in priority  queue\n");
	scanf("%d",&a);
	switch(a)
	{
	  
	  case 1:
	  		 printf("Enter the data : ");
	  	     scanf("%d",&data);
	  		  printf("Enter the priority : ");
	  		  scanf("%d",&pn);
	  	     enqueue(data,pn);
	  	     break;
	  case 2:
	  		 display();
	  		 break;
	  case 3:
	         dequeue();
			 break;		 
	  			 
	  	}
	  }
	  return 0;
}
