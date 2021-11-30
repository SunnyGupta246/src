#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * link;
};
int main()
{
    struct node *head=malloc(sizeof(struct node ));
    head->data=56;
    head->link=NULL;

    struct node *ptr=malloc(sizeof(struct node ));
    ptr->data=34;
    ptr->link=NULL;

    head->link=ptr;
    ptr=head;
    
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
    
    return 0;
}