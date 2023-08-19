#include <stdio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void preOrderTraverse(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preOrderTraverse(root->left);
        preOrderTraverse(root->right);
    }
}
void postOrderTraverse(struct Node*root){
    if(root!=NULL){
        postOrderTraverse(root->left);
        postOrderTraverse(root->right);
        printf("%d\t",root->data);
    }
}
void inOrderTreverse(struct Node*root){
    if(root!=NULL){
        inOrderTreverse(root->left);
        printf("%d\t",root->data);
        inOrderTreverse(root->right);
    }
}
int main()
{ /*construting the root node
     struct Node*p;
     p=(struct Node*)malloc(sizeof(struct Node));
     p->data=2;
     p->left=NULL;
     p->right=NULL;
     struct Node*p1;
     p1=(struct Node*)malloc(sizeof(struct Node));
     p->data=12;
     p1->left=NULL;
     p1->right=NULL;
     struct Node*p2;
     p2=(struct Node*)malloc(sizeof(struct Node));
     p2->data=22;
     p2->left=NULL;
     p2->right=NULL;
     //linking the root node with left and right node
     p->left=p1;
     p->right=p2;*/
    // creating root node using funtion
    struct Node *root = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);
    // linking the root with left and right children
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("Tree in preorder\n");
    preOrderTraverse(root);
    printf("\nTree in postoreder\n");
    postOrderTraverse(root);
    printf("\nTree in in order\n");
    inOrderTreverse(root);
    return 0;
}