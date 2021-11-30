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
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Data before deletion is :%d \n", ptr->data);
        ptr = ptr->link;
    }
    head->link->link=NULL;
    free(current);
    current=NULL;
    struct node *temp=head;
    while (temp!=NULL)
    {
        printf("after deletion data is :%d\n",temp->data);
        temp=temp->link;

    }
    
}