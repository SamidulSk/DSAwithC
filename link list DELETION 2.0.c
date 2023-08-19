//deleting the node at an index
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node*deleteAtIndex(int index,struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return(head);
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node* fourth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node* )malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data=1;
    fourth->next=NULL;
    printf("Linked list before deletion\n");
    linkedlistTraversal(head);
    head=deleteAtIndex(2,head);
    printf("Linked list after deletion\n");
    linkedlistTraversal(head);
    return 0;
}