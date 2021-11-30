#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int searche(struct node *tail, int n, struct node *ptr, int index)
{
    index=0;
    struct node *temp = tail;
    if (tail==NULL)
    {
        return -2;
    }
    temp=tail;
    
    do
    {
        if (n == temp->data)
        {
            return index;
        }
            temp=temp->next;
            index++;
        

    } while (temp!=ptr->next->next);
    return -1;
}
void del(struct node *tail, struct node *ptr)
{
    struct node *temp = malloc(sizeof(struct node));
    temp = ptr;
    tail->next = ptr->next;
    ptr = ptr->next;
    free(temp);
}
struct node *newcode(int data, struct node *tail, struct node *ptr, int pos)
{
    struct node *very = malloc(sizeof(struct node));
    very->data = data;
    while (pos > 1)
    {
        ptr = ptr->next;
        pos--;
    }
    very->next = ptr->next;
    ptr->next = very;
    very->next->next->next = tail;
    return ptr;
}
void addtoend(int data, struct node *tail)
{
    struct node *end = malloc(sizeof(struct node));
    end->data = data;
    tail->next->next = end;
}
struct node *addtoempty(int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
struct node *addtobeg(int data, struct node *tail)
{
    struct node *new = malloc(sizeof(struct node));
    new->next = tail;
    new->data = data;
    tail->next = new;
    return new;
}

int main()
{
    struct node *tail;
    int element = 0;
    int n, index = 0;
    tail = addtoempty(45);
    tail = addtobeg(23, tail);
    struct node *ptr;
    ptr = tail;
    addtoend(67, tail);
    int pos;

    ptr = newcode(25, tail, ptr, 2);
    del(tail, ptr);
    ptr = tail;

    do
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
        element++;
    } while (ptr != tail->next->next->next);
    printf("\nNumber of element is = %d\n", element);

    printf("Let search the element \n");
    printf("Enter the element which want to search\n");
    scanf("%d", &n);
     index=searche(tail, n,ptr, index);
    if (index==-1)
    {
        printf("Element is not found \n");
    }
    else if(index==-2)
    {
        printf("link list is empty\n");
    }
    else{
        printf("Element %d is at index %d\n",element,index);
    }
    

    return 0;
}