
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;//self referential pointer
};
struct node *head=NULL;

void create()
{
  struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("enter the data\n");
 scanf("%d",&temp->data);
 temp->next=NULL;
 printf("%d",temp->data);
}
void main()
{
    create();

}
