#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head;


void createmode(int n)
{
    int data;
    struct node *temp;
    head = malloc(sizeof(struct node));
    scanf("%d",&data);
    head->data = data;
    head->link = NULL;
    temp = head;
    for (int i = 2; i <= n; i++)
    {
        struct node *current = malloc(sizeof(struct node));
        printf("Enter the data of %d element \n", i);
        scanf("%d", &data);
        current->data = data;
        current->link = NULL;
        temp->link=current;
        temp=temp->link;
    }
}
void display()
{
    struct node * temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("Data is :%d",temp->data);
        temp=temp->link;
    }
    
}

int main()
{
    int n;
    printf("Enter the number of node\n");
    scanf("%d", &n);
    createmode(n);
    display();
    return 0;
}