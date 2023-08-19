//deleting the first node
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
struct Node*deleteFirst(struct Node*head){
    struct Node*p=head;
    head=head->next;
    free(p);
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
    head=deleteFirst(head);
    printf("Linked list after deletion\n");
    linkedlistTraversal(head);
    return 0;
}