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
void preoeder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preoeder(root->left);
        preoeder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
void inorder(struct node *root)
{
    if (root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}
int main()
{
    struct node *p = cretenode(4);
    struct node *p1 = cretenode(1);
    struct node *p2 = cretenode(6);
    struct node *p3 = cretenode(5);
    struct node *p4 = cretenode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Preorder of the series  is :\n");
    preoeder(p);
    printf("\n");
    printf("Post order of the series is :\n");
    postorder(p);
    printf("\n");
    printf("Inorder tranversal of the series is :\n");
    inorder(p);
    return 0;
}