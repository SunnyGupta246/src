#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;/*point to the left side*/
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct node * inorderpreceder(root)
{
    root= root->left;
    while (root->right!=NULL)
    {
        root=root->right;
    }
    
    
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct node *delete (struct node *root, int value)
{
    struct node *ipre;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
    }

    if (value < root->data)
    {
        delete (root->left, value);
    }
    else if (value > root->data)
    {
        delete (root->right, value);
    }
    else
    {
        ipre = inorder(root);
        root->data = ipre->data;
    }
}
int main()
{
    struct node *p = creatnode(5);
    struct node *p1 = creatnode(3);
    struct node *p2 = creatnode(6);
    struct node *p3 = creatnode(1);
    struct node *p4 = creatnode(4);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    inorder(p);
    return 0;
}