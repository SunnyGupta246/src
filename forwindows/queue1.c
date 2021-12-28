#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull()
{
    if (q->r==q->size-1)
    {
        return 1;
    }
    return 0;
    
}
void enqueue(struct *q,int val)
{
    if(isFull(q))
    {
        printf("THis queue in full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
    }
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    
    enqueue(&q,12);
    enqueue(&q,15);
    return 0;
}