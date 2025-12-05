//sorting in linke list
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
      if(head==NULL)
       {
        printf("list is empty!!!");
       }
       else
       {
            temp=head;
            head=head->next;
            temp->next=NULL;
            printf("deleted data =%d",temp->data);
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
       while(temp->next->next!=NULL)
       {
           temp=temp->next;
       }
       p=temp->next;
       temp->next=NULL;
       printf("deleted data =%d",p->data);
            free(p);
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
     void reverse()
     {
         printf("it working");
         struct node *temp =head;
         struct node *pre =NULL;
         struct node *last =NULL;
         while(temp!=NULL)
         {
             last=temp->next;
             temp->next=pre;
             pre=temp;
             temp=last;
         }
         head = pre;
     }
     void insert_at_loc()
     {
         struct node *temp,*p;
         temp=create();
         if(head==NULL)
             head=temp;
         else
         {
             int loc,i,len;
             printf("Enter the loc,where u want to insert a node");
             scanf("%d",&loc);
             len = length();
             if (loc<1 || loc>len+1)
             {
                 printf("Invalid Location!!!!");
             }
             else if(loc==1)
             {
                 temp->next=head;
                 head=temp;
             }
             else
             {
                 p=head;
                 for(i=1;i<loc-1;i++)
                 
                     p=p->next;
             }
             temp->next=p->next;
             p->next=temp;
         }
     }
     void sort()
     {
     	struct node *i,*j;
     	int temp;
     	
     	
     	if(head==NULL)
     	{
     		printf("link list is empty");
		 }
		 else
		 {
		 for(i=head;i!=NULL;i=i->next)
		 {
		 	for(j=i->next;j!=NULL;j=j->next)
		 	{
		 		if(i->data>j->data)
		 		{
		 			temp=i->data;
		 			i->data=j->data;
		 			j->data=temp;
				 }
			 }
		 }
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
   
      printf("\n\npress 1 perform insertion at first node\n");
      printf("press 2 perform  display linklist\n");
      printf("press 3 perform insertion at last node\n");
      printf("press 4 perform deletion at first node\n");
      printf("press 5 perform deletion at last node\n");
      printf("press 6 to find length of linklist\n");
      printf("press 7 to reverse a link list\n");
     printf("press 8 to insert at loc in link list\n");
     printf("press 9 to sort a link list\n");
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
              break;
        case 6:
              printf("length =%d",length());
              break;
        case 7:
              reverse();
              break;
        case 8:
        insert_at_loc();
        break;
        case 9:
        	sort();
		 }
 }
}
