#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linkedlistTraversal(struct Node*ptr){
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node*head;
    struct Node*sixth;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    struct Node*fifth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    sixth=(struct Node*)malloc(sizeof(struct Node));
    head->data=4;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=9; 
    third->next=fourth;
    fourth->data=55;
    fourth->next=fifth;
    fifth->data=65;
    fifth->next=sixth;
    sixth->data=33;
    sixth->next=NULL;
    linkedlistTraversal(head);
return 0;
}