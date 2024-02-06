#include <stdio.h> 
#include <stdlib.h> 
#define MAX 5 
void DFS(int adj[][MAX], int visited[], int start); 
int main() 
{ 
int visited[MAX] = {0}; 
int adj[MAX][MAX], i, j; 
int ch, size; 

printf("Enter the values into the adjacency matrix\n"); 
for (i = 0; i < MAX; i++) 
{ 
for (j = 0; j < MAX; j++) 
scanf("%d", &adj[i][j]); 
} 
printf("DFS Traversal is\n"); 
DFS(adj, visited, 0); 
return 0; 
} 
void DFS(int adj[][MAX], int visited[], int start) 
{ 
int s[MAX]; 
int top = -1, i, k; 
for (k = 0; k < MAX; k++) 
visited[k] = 0; 
s[++top] = start; 
visited[start] = 1; 
while (top != -1) 
{ 
start = s[top--]; 
printf("%c--", start + 65); 
for (i = 0; i < MAX; i++) 
{ 
if (adj[start][i] && visited[i] == 0) 
{ 
s[++top] = i;
visited[i] = 1; 
}
}
}
}
