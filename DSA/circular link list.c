// circular singly linked list   ///DELETION AT FIRST AND LAST H.W
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;//self referential pointer
};
struct node *head=NULL;
struct node* create()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}
void insert_at_first()
{
	struct node *temp,*p;
	temp=create();
	if(head==NULL)
	head=temp;
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		temp->next=head;
		head=temp;
		p->next=head;
	}
}

     void display()
     {
       if(head==NULL)
       
        printf("link list is empty!!!");
     
     else
      { 
       struct node *temp;
        temp=head;
        do
        {
        	printf("%d",temp->data);
        	temp=temp->next;
        }
        while(temp!=head);
    }
}
int main()
{
	int choice;
	while(1)
	{
		printf("\npress 1 to insert a data on first node in doubly linklist");
		printf("\npress 2 to display the data");
		switch(choice)
		{
			case 1:
				  insert_at_first();
				  break;
			case 2:
					display();	  
			}
			}
			return 0;
			}
