#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int s)
{
	stack[++top]=s;
}
int pop()
{
	return stack[top--];
	
}
int isEmpty()
{
	return top==-1;
}
void dfs(int adj[][MAX],int n, int start)
{ int i;
  int visited[MAX]={0};
  push(start);
  while(!isEmpty())
  {
  	int data = pop();
  	
  	if (!visited[data])
  	{
  		printf("%d",data);
  		visited[data]=1;
	  }
	  //push all unvisted node matrix
	  for( i=n-1;i>=0;i--)
	  { 
	   if (adj[data][i]==1 && !visited[i])
	  { 
	  push(i);
	  }
	 }
	  
  }
}
void main()
{

int n,i,j;
printf("Enter the no of vertices ");
scanf("%d",&n);

int adj[MAX] [MAX];
printf("Enter the elemnts of adjcent Matrix\n");
for (i=0; i<n;i++)
{
	for(j=0;j<n;j++)
	{ 
	  scanf("%d",&adj[i][j]);
	}
}
 int start;
 printf("Enter the start of vertices");
 scanf("%d",&start);
 dfs(adj,n,start);
}
