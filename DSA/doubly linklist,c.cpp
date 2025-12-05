//creating a node in doubly link list    //reverse,searching,delete at loc,sorting
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*pre;//self referential pointer
};
struct node *head=NULL;
struct node* create()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&temp->data);
	temp->pre=NULL;
	temp->next=NULL;
	return temp;
}
void insert_at_first()
{
	struct node *temp;
	temp=create();
	if(head==NULL)
	head=temp;
	else
	{
		temp->next=head;
		head->pre=temp;
		head=temp;
	}
}
void insert_at_last()
{
	 struct node *temp,*p;
    temp=create();
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        p=head;
        while(p->next!= NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->pre=p;
    }
}
void insert_at_loc( )
{
	struct node *temp,*p;
	int pos,i;
	printf("Enter the position you want to insert node");
	scanf("%d",&pos);
	temp= create();
	if (pos==1)
	{
		temp->next=head;
		if(head!=NULL)
		{
			head->pre=temp;
		}
		head=temp;
	}
	p=head;
	for(i=1;i<pos-1&&p!=NULL;i++)
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("Possition out of range");
		free (temp);
	}
	temp->next=p->next;
	temp->pre=p;
	if(p->next!=NULL)
	p->next->next=temp;
	
	p->next=temp;
	printf("Insert at %d possition ",pos);
	}
void display()
{
	struct node *temp;
	if (head==NULL)
	{
	printf("list is empty!!!");
	}
	else
	{
		struct node *temp;
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}	
}
  int length()
     {
         struct node*temp;
         int count=0;
         temp=head;
         while(temp!=NULL)
         {
             count++;
             temp=temp->next;
         }
         return count;
     }
void delete_at_first()
{
	 struct node *temp;
      if(head==NULL)
       {
        printf("list is empty!!!");
       }
       else
       {
            temp=head;
            head=head->next;
            if(head!=NULL)
            	head->pre=NULL;
            printf("deleted data =%d",temp->data);
            free(temp);
        }
}

void delete_at_last()
{
	 struct node *temp;
      if(head==NULL)
       {
        printf("list is empty!!!");
       }
       else
       {
            temp=head;
           while(temp->next!=NULL)
           {
           	temp=temp->next;
		   }
		   temp->pre->next=NULL;
            printf("deleted data =%d",temp->data);
            free(temp);
        }
}
int main()
{
	int choice;
	while(1)
	{
		printf("\npress 1 to insert a data on first node in doubly linklist");
		printf("\npress 3 to insert a data on last node in doubly linklist");
		printf("\npress 2 to display a data in doubly linklist");
		printf("\npress 4 to delete a data on first node in doubly linklist");
		printf("\npress 5 to delete a data on last node in doubly linklist");
		printf("\npress 6 to insert a data on location in doubly linklist");
		printf("\nEnter your choice= ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				  insert_at_first();
				  break;
			case 2:
					display();
					break;
			case 3:
					insert_at_last();
					break;
			case 4:
					delete_at_first();
					break;
			case 5:
					delete_at_last();
					break;
			case 6:
					insert_at_loc();			  
		}
	}
	return 0;
}
