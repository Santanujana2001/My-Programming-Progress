// iterative
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int val)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void preorder(struct node *ptr){
    if(ptr != NULL){
        printf("%d ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node *ptr){
    if(ptr != NULL){
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ",ptr->data);
    }
}
void inorder(struct node *ptr){
    if(ptr != NULL){
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }
}
int main()
{
    struct node *a = create(2);
    struct node *b = create(5);
    struct node *d = create(22);
    struct node *e = create(7);
    struct node *c = create(6);
    struct node *f = create(9);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->right = f;
    preorder(a);
    printf("\n");
    postorder(a);
    printf("\n");
    inorder(a);
    return 0;
}
