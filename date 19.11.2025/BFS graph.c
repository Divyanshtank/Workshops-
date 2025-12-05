#include<stdio.h>
#define size 10
int q[size];
int r= -1,f= -1;
void insert(int v)
{
	if(r==size-1)
	{
		printf("queue is full\n");
		return 0;
	}
	if (f == -1)
     {
		f=r=0;
	 }
	 else
	 {
	 	r++;
	 }
	q[r]=v;	
}
int deletee()
{
	if(f==-1|| f>r)
	{
		printf("Queue is empty\n");
		return -1;
	}
	int data=q[f++];
	if(f>r)
	{
		f=r=-1;
	}
	return data;
}
int isEmpty()
{
	return (f==-1||f>r);
}
void bfs(int adj[size][size],int n_v,int start_ver)
{
	int i;
	int visited[size]={0};
	visited[start_ver]=1;
	insert(start_ver);
	while(!isEmpty())
	{
		int curv=deletee();
		printf("%d",curv);
		for( i=0;i<n_v;i++)
		{
			if(adj[curv][i]== 1&& !visited[i])
			{
				visited[i]=1;
				insert(i);
			}
		}
	}
}
int main()
{   int i,j;
	int adj[size][size],n_v,start_ver;
	printf("Enter the total no. of vertices: ");
	scanf("%d",&n_v);
	printf("Enter thr element of the adjacency matrix: \n");
	for(i=0;i<n_v;i++)
	{
		for(j=0;j<n_v;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	printf("Enter the starting vertex: ");
	scanf("%d",&start_ver);
	printf("BFS started from vertex = %d\n",start_ver);
	bfs(adj,n_v,start_ver);
}
