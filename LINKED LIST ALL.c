#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *firstInsert(struct Node *head, int data)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->next = head;
    return Newnode;
}
struct Node *Insertion(struct Node *head, int index, int data)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    Newnode->data = data;
    Newnode->next = p->next;
    p->next = Newnode;
    return head;
}
struct Node *LastInsert(struct Node *head, int data)
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
struct Node *InsertAfterNode(struct Node *head, struct Node *Prevnode, int data)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->next = Prevnode->next;
    Prevnode->next = Newnode;
    return head;
}
struct Node *Firstdelete(struct Node *head)
{
    struct Node *p = head;
    head = head->next;
    free(p);
    return head;
}
struct Node *DeleteAtAny(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node *DeleteLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct Node *DeleteValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 9;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 7;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;
    printf("The Original linked list\n");
    linkedlistTraversal(head);
    head = firstInsert(head, 59);
    printf("\nLinked list after insert at first\n");
    linkedlistTraversal(head);
    printf("\nLinked list after insert at any index\n");
    head = Insertion(head, 5, 51);
    linkedlistTraversal(head);
    printf("\nLinked list after insert at last\n");
    head = LastInsert(head, 49);
    linkedlistTraversal(head);
    printf("\n Linked list after insert after a node\n");
    head = InsertAfterNode(head, third, 11);
    linkedlistTraversal(head);
    printf("\nLinked list after delete the first element\n");
    head = Firstdelete(head);
    linkedlistTraversal(head);
    printf("\nLinked list after delete from any index\n");
    head = DeleteAtAny(head, 2);
    linkedlistTraversal(head);
    printf("\nLiked list after delete the last node\n");
    head = DeleteLast(head);
    linkedlistTraversal(head);
    printf("\nLinked list after delete a value\n");
    head = DeleteValue(head, 51);
    linkedlistTraversal(head);

    return 0;
}