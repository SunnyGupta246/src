#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *cretenode(int data)
{

    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    struct node *p = cretenode(2);
    struct node *p1 = createnode(12);
    struct node *p2 = cretenode(10);
    p->left = p1;
    p->right = p2;
    return 0;
}