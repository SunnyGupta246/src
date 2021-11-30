#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void del(struct node **head,int position);

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

    int position = 2;
    del(&head, position);

    return 0;
}

void del(struct node **head, int position)
{
    struct node *current = *head;
    struct node *previous = *head;
    if (*head==NULL)
    {
        printf("List is alredy empty\n");
    }
    else if(position==1)
    {
        *head=current->link;
        free(current);
        current=NULL;

    }
    else
    {
        while (position!=1)
        {
            previous=current;
            current =current ->link;
            position--;
        }
        previous->link=current ->link;
        free(current );
        current=NULL;
        
    }
}