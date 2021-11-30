#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[4];
int top = -1;
int isFull()
{
    if (top==MAX-1)
    {
        return 1;

    }
    else
    {
        return 0;
    }
    
}
int isEmpty()
{
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data)
{
    if (isFull())
    {
        printf("stack is overflow\n");  
    }
    top=top+1;
    stack_arr[top]=data;
    
}
int pop()
{
    int value;
    if (isEmpty())
    {
        printf("Stack is underflow \n");
        exit(1);
    }
    value=stack_arr[top];
    top=top-1;
    return value;
    
}
int peek()
{
    if (isEmpty())
    {
        printf("Stack is underflow \n");
        exit(1);
    }
    return stack_arr[top];
    
}
void print()
{
    int i;
    if (top==-1)
    {
        printf("Stack is underflow \n");
        return;
    }
    for ( i = top; i >=0 ; i--)
    {
        printf("%d\n",stack_arr[i]);
    }
    
    
}
int main()
{
    int data, choice;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. pop\n");
        printf("3. print the top element \n");
        printf("4. print all the element of the stack\n");
        printf("5. Quit\n");
        printf("Enter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value of the elment to be pushed\n");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            data = pop();
            printf("Deleted element is %d\n", data);
            break;

        case 3:
            printf("The top most element of the staack is %d\n", peek());
            break;
        case 4:
            print();
            break;

        case 5:
            exit(1);

        default:
            printf("Wrong choice\n");
        }
    }

    return 0;
}