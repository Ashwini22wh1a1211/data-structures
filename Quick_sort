#include<stdio.h>
int swap(int* a, int* b)
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
int partition(int A[],int p,int r)
{
int x=A[r];
int i=p-1;
for(int j=p;j<=r-1;j++)
{
if(A[j]<=x)
{
i=i+1;
swap(&A[i],&A[j]);
}
}
swap(&A[i+1],&A[r]);
return i+1;
}
void printArray(int arr[], int size)
{  
    int i;  
    for (i = 0; i < size; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
}  
int quicksort(int A[],int p,int r)
{
if(p<r)
{
int q=partition(A,p,r);
printf("\n After partition");
printArray(A,r+1);
quicksort(A,p,q-1);
quicksort(A,q+1,r);
}
}

void main()
{
int arr[20];
int n;
printf("Enter n\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\nUnsorted array\n");
printArray(arr,n);
quicksort(arr, 0, n - 1);  
    printf("\nSorted array: \n");  
    printArray(arr, n);  
}  
