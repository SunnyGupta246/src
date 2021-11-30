#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *del(struct node *head);

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

    head = del(head);
    if (head == NULL)
    {
        printf("Link list delete sussfully\n");
    }
    return 0;
}

struct node *del(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {

        temp = temp->link;
        free(head);
        head = NULL;
        head = temp;
    }
    return head;
}