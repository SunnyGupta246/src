#include <stdio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *link;
};
void linklist(struct node *ptr)
{
    printf("Print the element of the linklsit \n");
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->link;
    }
}
int deque()
{
    int val;
    struct node *ptr;
    if (f == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        ptr = f;
        f = f->link;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is FUll\n");
    }
    else
    {
        n->data = val;
        n->link = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->link = n;
            r = n;
        }
    }
}

int main()
{

    linklist(f);
    enqueue(34);
    printf("Dequeuing element %d\n", deque());
    enqueue(15);
    enqueue(13);
    linklist(f);
    return 0;
}