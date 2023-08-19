//In order traversal of BST gives an ascending sorted array
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
void inOrderTreverse(struct Node *root)
{
    if (root != NULL)
    {
        inOrderTreverse(root->left);
        printf("%d\t", root->data);
        inOrderTreverse(root->right);
    }
}
int isBST(struct  Node* root){
    static struct Node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main()
{
    struct Node *root = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);
    // linking the root with left and right children
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    printf("\nTree in in order\n");
    inOrderTreverse(root);
    if(isBST(root)){
        printf("\nThis is a BST\n" );
    }
    else{
        printf("\nThis is not a BST");
    }
    return 0;
}
