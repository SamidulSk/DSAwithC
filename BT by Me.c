#include<stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node*createNode(int data){
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorderTraverse(struct Node*root){
    if(root!=NULL){
    printf("%d\t",root->data);
    preorderTraverse(root->left);
    preorderTraverse(root->right);
    }
}
void postorderTreverse(struct Node*root){
    if(root!=NULL){
        postorderTreverse(root->left);
        postorderTreverse(root->right);
        printf("%d\t",root->data);
    }
}
void inorderTraverse(struct Node*root){
    if(root!=NULL){
        inorderTraverse(root->left);
        printf("%d\t",root->data);
        inorderTraverse(root->right);
    }
}
int main()
{
    struct Node*root=createNode(9);
    struct Node*n1=createNode(3);
    struct Node*n2=createNode(1);
    struct Node*n3=createNode(6);
    struct Node*n4=createNode(8);
    struct Node*n5=createNode(2);
    struct Node*n6=createNode(4);
    root->left=n1;
    root->right=n2;
    n1->left=n3;
    n1->right=n4;
    n4->left=NULL;
    n4->right=n6;
    n2->left=n5;
    n2->right=NULL;
    printf("The preorder Traversal of tree is\n");
    preorderTraverse(root);
    printf("\nThe postorder Traversal of tree is\n");
    postorderTreverse(root);
    printf("\nThe inorder Traversal of the tree is\n");
    inorderTraverse(root);
    
return 0;
}