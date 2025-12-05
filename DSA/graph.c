#include<stdio.h>
int no_v;
void main()
{
	printf("Enter the number of vertices\n");
	scanf("%d",&no_v);
	int adj[no_v][no_v];
	int s,d,i,j;
	//initialize the adjacent matrix
	for(i=0;i<no_v;i++)
	{
		for(j=0;j<no_v;j++)
		{
			adj[i][j]=0;
		}
	}
	//take edges as input until -1,-1 is entered
	while(1)
	{
		printf("Enter an edge from (0 to %d)to(0 to %d),-1,-1 to stop \n",no_v-1,no_v-1);
		scanf("%d%d",&s,&d);
		if(s==-1 && d==-1)
		{
			break;
		}
		if(s>=0 && s<no_v && d>=0 && d<no_v)
		{
			adj[s][d]=1;
			adj[d][s]=1;//undirected graph
	}
	else
	{
		printf("Invalid edges ! please emter edges between 0 to %d \n",no_v-1);
	}
	}
	//print adjacency matrix
	for(i=0;i<no_v;i++)
	{
		for(j=0;j<no_v;j++)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}
}
