// deletion at last nodes

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
 temp=(struct node*) malloc(sizeof(struct node));
 printf("enter the data\n");
 scanf("%d",&temp->data);
 temp->next=NULL;
 return temp;
}
void insert_at_first()
{
  struct node *temp;
 temp = create();
 if (head==NULL)
 {
    head=temp;
 }
 else
 {
    temp->next=head;
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
    }
}
    void delete_at_first()
    {
    	struct node *temp;
    	if(head== NULL)
    	{
    		printf("list is empty!!!");
		}else
		{
			temp=head;
			head=head->next;
			temp->next =NULL;
			printf("deleted data=%d",temp->data);
			free(temp);
		}
	}
	void delete_at_last()
	{
		struct node *temp,*p;
		if(head==NULL)
		{
		printf("list is empty!!!");
	    }
		else
		temp=head;
		
        while(temp->next->next!= NULL)
        {
            temp=temp->next;
        }
        p=temp->next;
        temp->next=NULL;
		printf("deleted data=%d",p->data);
		free(p);
	
	}
	
     void display()
     {
       if(head==NULL)
       {
        printf("link list is empty!!!");
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
 

int main()
{
    int choice;
   while(1)
   {
   
      printf("\npress 1 perform insertion at first node\n");
      printf("\npress 2 perform  display linklist\n");
      printf("\nprees 3 to perform insertion at last node\n");
       printf("\nprees 4 to perform deletion at first node\n");
        printf("\nprees 5 to perform deletion  at last node\n");
      printf("enter your choice");
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
    }
 }
 return 0;
}



