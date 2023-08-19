// insertion in circular linked list at any index
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *head)
{
    struct Node *p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);
}
struct Node* insertAtAny(int data,int index,struct Node*head){
    struct Node*NewNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;             //launching a new temporary pointer named p which is point to head
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    NewNode->data=data;
    NewNode->next=p->next;
    p->next=NewNode;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second nodes
    head->data = 4;
    head->next = second;
    // Link second and third nodes
    second->data = 3;
    second->next = third;
    // Link third to fourth
    third->data = 6;
    third->next = fourth;
    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = head;
    printf("The Original liked list\n");
    linkedlistTraversal(head);
    head=insertAtAny(49,4,head);
    printf("\nlinked list after insertion\n");
    linkedlistTraversal(head);
   
    return 0;
}