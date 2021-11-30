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
    struct node *ptr=head;
    while (ptr!=NULL)
    {
        printf("Data before deletion is %d: \n",ptr->data);
        ptr=ptr->link;
    }
    

    struct node *new=malloc(sizeof(struct node ));
    new->data=78;
    new->link=NULL;
    printf("we add a node at 2nd postion\n");
    new->link=head->link;
    head->link=new;

    struct node *temp=head;
    while (temp!=NULL)
    {
        printf("Data is :%d\n",temp->data);
        temp=temp->link;
    }
 return 0;   
}