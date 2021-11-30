#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *addtoend(struct node *head, int data)
{
    struct node *temp, *tp;
    temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;

    temp->next = NULL;
    tp = head;
    while (tp->next != NULL)
    {
        tp = tp->next;
    }
    tp->next = temp;

    temp->prev = tp;

    return head;
}

struct node *addtoempty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}
struct node *creatlist(struct node *head)
{
    int n, data;
    printf("Enter the number of node\n");
    scanf("%d", &n);

    if (n == 0)
    {
        return head;
    }

    printf("Enter the element of node 1st\n");
    scanf("%d", &data);
    head = addtoempty(head, data);

    for (int i = 1; i < n; i++)
    {
        printf("Enter the element of node %d\n", i + 1);
        scanf("%d", &data);
        head = addtoend(head, data);
    }
    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = creatlist(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
