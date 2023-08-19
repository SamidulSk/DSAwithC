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
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
} // for check this is bst or not
void inorderTraverse(struct Node *root)
{
    if (root != NULL)
    {
        inorderTraverse(root->left);
        printf("%d\t", root->data);
        inorderTraverse(root->right);
    }
}
struct Node *search(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
void insert(struct Node *root, int key)
{
    struct Node *prev = NULL;
    while (root != NULL)
    {   prev=root;
        if (key == root->data)
        {
            printf("%d already present in tree we cannot insert it again\n", key);
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct Node *new = createNode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}
struct Node*inOrderPredecesor(struct Node*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct Node*delete(struct Node*root,int value){
    struct Node*ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    if(value<root->data){
       root->left= delete(root->left,value);
    }
    else if(value>root->data){
       root->right= delete(root->right,value);
    }
    else{
        ipre=inOrderPredecesor(root);
        root->data=ipre->data;
        root->left=delete(root->left,ipre->data);
    }
    return root;
}
int main()
{
    struct Node *root = createNode(7);
    struct Node *n1 = createNode(5);
    struct Node *n2 = createNode(11);
    struct Node *n3 = createNode(3);
    struct Node *n4 = createNode(6);
    struct Node *n5 = createNode(9);
    struct Node *n6 = createNode(49);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    //inorderTraverse(root);
    struct Node *n;
    n = search(root, 49);
    if (n != NULL)
    {
        printf("\n%d is found\n", n->data);
    }
    else
    {
        printf("\nElement not found");
    }
    insert(root, 10);
    insert(root, 88);
    inorderTraverse(root);
    delete(root,10);
    delete(root,11);
    printf("\n");
    inorderTraverse(root);
    return 0;
}