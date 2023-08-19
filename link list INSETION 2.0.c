//insert at any index
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
struct Node* insertAtIndex(int data,int index,struct Node*head){
    struct Node*NewNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;         //launching a new temporary pointer named p which is point to head
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
    linkedlistTraversal(head);
    head=insertAtIndex(9,1,head);
    linkedlistTraversal(head);
    return 0;
}