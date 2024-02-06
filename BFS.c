#include <stdio.h> 
#include <stdlib.h> 
#define MAX 5 
 
void BFS(int adj[][MAX], int visited[], int start); 
 
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
 
    printf("BFS Traversal is\n"); 
    BFS(adj, visited, 0); 
 
    return 0; 
} 
 
void BFS(int adj[][MAX], int visited[], int start) 
{ 
    int q[MAX], rear = -1, front = -1, i, k; 
 
    for (k = 0; k < MAX; k++) 
        visited[k] = 0; 
 
    q[++rear] = start; 
    ++front; 
    visited[start] = 1; 
 
    while (rear >= front) 
    { 
        start = q[front++]; 
        printf("%c--", start + 65); 
        for (i = 0; i < MAX; i++) 
        { 
            if (adj[start][i] == 1 && visited[i] == 0) 
            { 
                q[++rear] = i; 
                    visited[i] = 1; 
                } 
            }
        }
}
