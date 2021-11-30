#include <stdio.h>
#include<stdlib.h>
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

    struct node *ptr = head;
    ptr = add_at_end(ptr, 94);
    ptr = add_at_end(ptr, 45);
    ptr = add_at_end(ptr, 32);
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    struct node *add_at_end(struct node * ptr, int data)
    {
        struct node *temp;

        temp = malloc(sizeof(struct node));
        temp->data = data;
        temp->link = NULL;

        ptr->link = temp;
        return temp;
    }

    return 0;
}