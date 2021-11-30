#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 43;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link->link = current;
    printbefore(head);
    insertingnode(head, 8);
    printalldata(head, 0);

    return 0;
}

void insertingnode(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }

    ptr->link = temp;
}

void printalldata(struct node *head, int count)

{
    while (head != NULL)
    {
        count++;
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");

    printf("Number of node is %d\n", count);
}

printbefore(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}

