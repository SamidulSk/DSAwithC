// linked list all insertion
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
        printf("\n%d\t", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(int data, struct Node *head)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->next = head;
    return Newnode;
}
struct Node *insertAtAny(int data, int index, struct Node *head)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    Newnode->data = data;
    Newnode->next = p->next;
    p->next = Newnode;
    return head;
}
struct Node *insertAtlast(int data, struct Node *head)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    Newnode->data = data;
    Newnode->next = NULL;
    p->next = Newnode;
    return head;
}
struct Node *insertafterNode(int data, struct Node *head, struct Node *prevNode)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->next = prevNode->next;
    prevNode->next = Newnode;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 9;
    second->next = third;
    third->data = 77;
    third->next = fourth;
    fourth->data = 55;
    fourth->next = fifth;
    fifth->data = 44;
    fifth->next = NULL;
    printf("The original linked list");
    linkedlistTraversal(head);
    head = insertAtFirst(49, head);
    printf("\nLinked list after insert at first");
    linkedlistTraversal(head);
    head = insertAtAny(59, 2, head);
    printf("\nLinked list after insert at any index");
    linkedlistTraversal(head);
    head = insertAtlast(51, head);
    printf("\nLinked list after last insertion");
    linkedlistTraversal(head);
    head = insertafterNode(88, head, fourth);
    printf("\nLinked list after insert after Node");
    linkedlistTraversal(head);
    return 0;
}