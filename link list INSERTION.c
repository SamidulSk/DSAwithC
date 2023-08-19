//insert at begining
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
struct Node* insertAtFirst(int data, struct Node*head){
    struct Node*NewNode=(struct Node*)malloc(sizeof(struct Node));      //creatiing a new node which have to insert(name of new node is NewNode)
    NewNode->data=data;   
    NewNode->next=head;                                              // new head is NewNode
    return NewNode;
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
    // Link first and second nodes
    head->data = 7;
    head->next = second;
    // Link second and third nodes
    second->data = 11;
    second->next = third;
    // Link third to fourth
    third->data = 41;
    third->next = fourth;
    // Terminate the list at the fourth node
    fourth->data=66;
    fourth->next=NULL;
    printf("Linked list before insertion:-");
    linkedlistTraversal(head);
    head=insertAtFirst(56,head);
    printf("Linked list after insertion");
    linkedlistTraversal(head);
    return 0;
}