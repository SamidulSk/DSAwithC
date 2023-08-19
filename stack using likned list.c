#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linkedlistTraversal(struct Node*ptr){
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isEmpty(struct Node*top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node*top){
    struct Node*p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct Node* push(struct Node*top,int data){
    if(isFull(top)){
        printf("stack overflow\n");
    }
    struct Node*Newnode=(struct Node*)malloc(sizeof(struct Node));
    Newnode->data=data;
    Newnode->next=top;
    top=Newnode;
    return top;
    
}
int pop(struct Node**top){
    if(isEmpty(*top)){
        printf("stack underflow\n");
    }
    struct Node*p= *top;
    *top=(*top)->next;
    int x=p->data;
    free(p);
    return x;
}
int main()
{
    struct Node*top=NULL;
    top=push(top,78);
    top=push(top,49);
    top=push(top,51);
    linkedlistTraversal(top);
    int element=pop(&top);
    printf("Poped element is %d\n",element);
    linkedlistTraversal(top);
return 0;
}