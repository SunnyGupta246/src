#include <stdio.h>
#include <stdlib.h>
struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue *q, int val)
{
    if (isFull(q))
    {
        printf("This queue is full\n");
    }
    else
    {

        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element is: %d\n", val);
    }
}
int dequueue(struct circularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is empety\n");
    }
    
    else
    {
    q->f = (q->f + 1) % q->size;
    a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 45);
    enqueue(&q,66);
    printf("Dequeuing element in %d\n", dequueue(&q));
    printf("Dequeuing element in %d\n", dequueue(&q));
    printf("Dequeuing element in %d\n", dequueue(&q));

    return 0;
}