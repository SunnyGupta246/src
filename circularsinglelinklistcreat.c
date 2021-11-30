#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *circular(int data)
{
    struct node *head=malloc(sizeof(struct node ));
    head->data=data;
    head->next=head;
    return head;
}

int main()
{
    int data=34;
    struct node *tail;
    tail=circular(data);
    printf("Display %d \n",tail->data);   
    return 0;
}