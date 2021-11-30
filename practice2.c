#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *addtobeg(struct node *tail, int data)
{
    struct node *beg;
    beg->next = tail;
    beg->prev = tail;
    tail->next = beg;
    tail->prev = beg;
    beg->data = data;
    return beg;
}
struct node *addtoempty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = temp;
    temp->next = temp;
    return temp;
}

int main()
{
    struct node *tail = NULL;
    tail = addtoempty(45);
    tail = addtobeg(tail, 34);
    struct node *dis=tail->next;
    do
    {
        printf("%d",tail->data);
        tail=tail->next;
    } while (dis->next!=tail);
    
    return 0;
}