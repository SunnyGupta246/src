#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
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
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
        
    }
    else
    return 1;
}
int main()
{
    struct node *p = cretenode(5);
    struct node *p1 = cretenode(3);
    struct node *p2 = cretenode(6);
    struct node *p3 = cretenode(1);
    struct node *p4 = cretenode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Inorder tranversal of the series is :\n");
  
    printf("%d",isBST(p));
    return 0;
}