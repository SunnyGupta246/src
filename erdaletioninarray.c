#include <stdio.h>
#include<stdlib.h>
int del(int arr[],int n);
int main()
{
    int arr[8];
    int n,i;
    printf("Enter the number  elemets\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",&arr[i]);
    }
    n=del(arr,n);
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}

int del(int arr[],int n)
{
    int i;
    if (n==0)
    {
        printf("Array is empty\n");
        return n;
    }
    for ( i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
        return n-1;
    }
    
    
}