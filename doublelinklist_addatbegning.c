#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addtoempty(struct node *head, int data);
struct node *addtobegining(struct node *head, int data);

int main()
{
    struct node *ptr;
    struct node *head = NULL;
    head = addtoempty(head, 45);
    head = addtobegining(head, 34);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
struct node* addtoempty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addtobegining(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = 34;
    temp->next = NULL;
    temp->next=head;
    head->prev = temp;
    head = temp;
    return head;
}