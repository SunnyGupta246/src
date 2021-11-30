#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;
void createnode(int n);
void displaynode();

int main()
{

    int n;
    printf("Enter the nuber of node \n");
    scanf("%d", &n);
    creatnode(n);
    displaynode();
    return 0;
}

void creatnode(int n )
{
    int data;
    struct node *temp;
    head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Empty set\n");
    }
    else
    {
        printf("Enter the data of 1st node:\n");
        scanf("%d", &data);
        head->data = data;
        head->link = NULL;
        temp = head;
    }
    for (int i = 2; i <= n; i++)
    {
        struct node *current = malloc(sizeof(struct node));
        if (current == NULL)
        {
            printf("Set is empty\n");
            break;
        }
        else
        {
            printf("Enter the data of %dst node\n", i);
            scanf("%d", &data);
            current->data = data;
            current->link = NULL;
            temp->link = current;
            temp = temp->link;
        }
    }
}
void displaynode()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("Empty\n");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("Data is :%d\n", temp->data);
            temp = temp->link;
        }
    }
}