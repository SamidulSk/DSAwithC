#include <stdio.h>
#include<stdlib.h>
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
void insert(struct Node*root,int key)
{ 
   struct Node*prev=NULL;
   while(root!=NULL){
    prev=root;
    if(key==root->data){
        printf("%d is already present in BST we cannot insert it again\n",key);
        return;
    }
    else if(key<root->data){
        root=root->left;
    }
    else{
        root=root->right;
    }
   }
   struct Node*new=createNode(key);
   if(key<prev->data){
    prev->left=new;
   }
   else{
    prev->right=new;
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
      // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    insert(root,16);
    printf("%d",root->right->right->data);
    return 0;
}