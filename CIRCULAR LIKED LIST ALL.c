#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void CLLTraversal(struct Node*head){
    struct Node*p=head;
    do{
        printf("%d\t",p->data);
        p=p->next;
    }
while(p!=head);
}
struct Node*InsertAtFirst(struct Node*head,int data){
    struct Node*Newnode=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    Newnode->data=data;
    Newnode->next=p->next;
    p->next=Newnode;
    return Newnode;
}
struct Node *LastInsert(struct Node *head, int data)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    Newnode->data = data;
    Newnode->next = head;
    p->next = Newnode;
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 9;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 7;
    third->next = fourth;
    fourth->data = 1;
    fourth->next =head;
    printf("The Original Circular linked list\n");
    CLLTraversal(head);
    printf("\n Linked list after insert at first\n");
    head=InsertAtFirst(head,54);
    CLLTraversal(head);
    printf("\nLinked list after last insertion\n");
    head=LastInsert(head,99);
    CLLTraversal(head);

return 0;
}