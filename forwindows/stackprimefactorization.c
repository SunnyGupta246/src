#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int top=-1;
int stack_arr[MAX];
void push(int data)
{
    top = top + 1;
    stack_arr[top] = data;
}
int pop()
{
    int value;
    value = stack_arr[top];
    top = top - 1;
    return value;
}
void primefactor(int num)
{
    int i= 2;
    while (num!=1)
    {
        while(num % i==0)
        {
            push(i);
            num=num/i;
        }
        i++;
    }
    while (top != -1)
    {
        printf("%d ",pop());
    }
    
    
}
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    primefactor(num);
    return 0;
}