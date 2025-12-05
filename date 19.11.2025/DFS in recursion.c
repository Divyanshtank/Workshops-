#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void dfs(int adj[][MAX], int n, int visited[], int node)
{
    int i;
    
    // Mark current node as visited and print it
    visited[node] = 1;
    printf("%d ", node);
    
    // Recursively visit all adjacent unvisited nodes
    for(i = 0; i < n; i++)
    {
        if(adj[node][i] == 1 && !visited[i])
        {
            dfs(adj, n, visited, i);
        }
    }
}

void main()
{
    int n, i, j;
    printf("Enter the no of vertices: ");
    scanf("%d", &n);
    
    int adj[MAX][MAX];
    int visited[MAX] = {0};  // Initialize visited array
    
    printf("Enter the elements of adjacent Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    
    int start;
    printf("Enter the start vertex: ");
    scanf("%d", &start);
    
    printf("DFS Traversal: ");
    dfs(adj, n, visited, start);
    printf("\n");
}

