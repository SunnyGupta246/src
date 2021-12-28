#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
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
int peek()
{
    return stack_arr[top];
}
void print()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack_arr[i]);
    }
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. pop\n");
        printf("3. Print the top element \n");
        printf("4. print all the element of the stack \n");
        printf("5. Quit \n");
        printf("Please enter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: \n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Deleted element is %d \n", data);
            break;
        case 3:
            printf("Th top most element of the stack is %d\n", peek());
        case 4:
            print();
            break;
        case 5:
            exit(1);

        default:
            printf("Wrong choice \n");
            break;
        }
    }

    return 0;
}