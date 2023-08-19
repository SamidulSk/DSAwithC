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
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *deleteFirst(struct Node *head)
{
    struct Node *q = head;
    head = head->next;
    free(q);
    return (head);
}
struct Node *deleteAtAny(int index, struct Node *head)
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
    return (head);
}
struct Node *deleteLast(struct Node *head)
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
    return (head);
}
struct Node *deleteValue(int value, struct Node *head)
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
    return (head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 8;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = fifth;
    fifth->data = 45;
    fifth->next = NULL;
    printf("The Original liked list\n");
    linkedlistTraversal(head);
    head = deleteFirst(head);
    printf("\nlinked list after delete the first element\n");
    linkedlistTraversal(head);
    head = deleteAtAny(2, head);
    printf("\nlinke list after delete from any index\n");
    linkedlistTraversal(head);
    head = deleteLast(head);
    printf("\nLined list after delete the last node\n");
    linkedlistTraversal(head);
    int value;
    printf("\n Enter the value which you want to delete");
    scanf("%d", &value);
    head = deleteValue(value, head);
    printf("\nlinked list after deltete %d ", value);
    printf("\nThe last linked list\n");
    linkedlistTraversal(head);
    return 0;
}