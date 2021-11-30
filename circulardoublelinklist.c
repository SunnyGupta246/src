#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *doublelink(int data)
{
    struct node *head = malloc(sizeof(struct node));
    head->data=data;
    head->next=head;
    head->prev=head;
    return head;
}

int main()
{
    int data = 45;
    struct node *tail;
    tail = doublelink(data);
    printf("Display %d\n",tail->data);
    return 0;
}