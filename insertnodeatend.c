#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *add_to_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    ptr->link->link->link = temp;
    return temp;
}
struct node *addtoend(struct node *ptr, int data)
{
    struct node *memp=malloc(sizeof(struct node ));
    memp->data=data;
    memp->link=NULL;

    ptr->link=memp;
    return memp;
}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 32;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 45;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 65;
    current->link = NULL;
    head->link->link = current;

    struct node *ptr = head;
    int data;

    ptr = add_to_end(ptr, 456);
    ptr = addtoend(ptr, 455);
    
    ptr=head;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
