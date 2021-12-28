#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int top = -1;
int arr[MAX];

    

int pop()
{
    int val;
    val=arr[top];
    top=top-1;
    return val;
}
void push(int num)
{

    top += 1;
    arr[top] = num;
}
int main()
{
    int r;
    int n;
    printf("Enter the number to convert decimal to binary \n");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 2;
        push(r);
        n = n / 2;
    }
    while (top!=-1)
    {
        printf("%d",pop());
    }
    

    return 0;
}