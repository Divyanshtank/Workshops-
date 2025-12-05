//Binary tree
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
   struct node *left,*right;
};
struct node *root =NULL;
struct node* create()//creating tree node
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data");
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
	}
}
void inorder(struct node *root)
{
   if(root!=NULL)
   {
     inorder(root->left);
     printf("%d\t",root->data);
     inorder(root->right);
   }
}
void preorder()
{
    if (root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder()
{
  if (root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->data);
    }
    
}
void main()
{
  struct node *temp,*templeft,*tempright;
   temp=create();
   templeft=create();
   tempright=create();
   root=temp;
   root->left = templeft;
   root->right = tempright;
   root->right->left=create();
   inorder(root);
   printf("\n");
   preorder(root);
   printf("\n");
   postorder(root);
   printf("\n");
   
}
