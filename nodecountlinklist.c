#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=malloc(sizeof(struct node ));
    head->data=44;
    head->link=NULL;

    struct node*current=malloc(sizeof(struct node ));
    current->data=55;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node ));
    current->data=4;
    current->link=NULL;
    head->link->link=current;
    countofnode(head);
    
    return 0;
}
void countofnode(struct node *head)
{
    int count=0;

    if(head==NULL)

    {
        printf("there is no node\n");
    }
    
    
    while (head!=NULL)
    {
        count++;
        head=head->link;
    }
    printf("number of node is %d\n",count);
}