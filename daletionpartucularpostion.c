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
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    struct node *heap = malloc(sizeof(struct node));
    heap->data = 3;
    heap->link = NULL;

    head->link->link = heap;

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
    temp=head;
    head->link = heap;
    free(current);
    
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }

    return 0;
}