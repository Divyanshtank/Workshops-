#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node*root=NULL;
struct node *create()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data\n");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert()
{
	struct node *temp,*cur,*p;
	temp=create();
	if (root==NULL)
	{
		root=temp;
	}
	else
	{
		p=root;
		cur=root;
		while(cur)
		{
			p=cur;
			if(temp->data>cur->data)
			{
				cur=cur->right;
			}
			else
			{
				cur=cur->left;
			}
		}
		if(temp->data>p->data)
		{
			p->right=temp;
		}else
		{
			p->left=temp;
		}
	}
}
struct node* insert2(struct node *temp,struct node *h)
{
if(h==NULL)
{
	h=temp;
	return h;
}
else if(temp->data>h->data)
{
	h->right=insert2(temp,h->right);
}
else if(temp->data<h->data)
{
	h->right=insert2(temp,h->left);
}else
{
	return h;
}
}
void inorder(struct node *h)
{
	if(h!=NULL)
	{
		inorder(h->left);
		printf("%d",h->data);
		inorder(h->right);
	}
}
struct node* min(struct node *temp)
{
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp;
}
void main()
{
	int a,item;
	struct node *temp,*h;
	while(1)
	{
	printf("\n1 insert \n");
	printf("2 display\n");
	printf("3 insert by using recursion\n");
	printf("4 delete\n");
	printf("enter your choice\n");
	scanf("%d",&a);
	switch(a)
		{
			case 1:
					insert();
					break;
			case 2:
					inorder();
					break;
			case 3 :
					 temp=create();
	                 h=root;
					 root=insert2(temp,h);
				    break;
			case 4:   
					  printf("Enter the data to be delete\n");
			          scanf("%d",&item);
					  root=delete(root,item);
					  break;
					  default: 	printf("Tnvalid choice\n");				
		}
	}
}
