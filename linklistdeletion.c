#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node*del(struct node *head);
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = head;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;
    head=del(head);
    struct node *ptr=head;
    while (ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    
    return 0;
}

struct node *del(struct node *head)
{
    if (head==NULL)
    {
        printf("list is alredy empty\n");

    }
    else
    {
        struct node *temp;
        temp=head;
        head=head->link;
        free(temp);
        temp=NULL;
    }
    return head;
}