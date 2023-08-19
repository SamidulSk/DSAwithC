#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//***************************************
// void linkedlistTraversal(struct Node*head){
//     struct Node*p=head;
//     while(p->next!=head)
//     {
//         printf("%d\n",p->data);
//         p=p->next;
//     }
//     printf("%d",p->data);
// }
//****************************************
// using do while loop
void linkedlistTraversal(struct Node *head)
{
    struct Node *p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);
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
    linkedlistTraversal(head);
    return 0;
}