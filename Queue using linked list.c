#include <stdio.h>
#include <stdlib.h>
struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *f)
{
    while (f != NULL)
    {
        printf("%d\t", f->data);
        f = f->next;
    }
}
void enqueue(int data)
{
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    if (Newnode == NULL) // isFull?
    {
        printf("Queue is full\n");
    }
    else
    {
        Newnode->data = data;
        Newnode->next = NULL;
        if (f == NULL)
        {
            f = r = Newnode;
        }
        else
        {
            r->next = Newnode;
            r = Newnode;
        }
    }
}
int dequeue()
{
    int val=-1;
    struct Node*ptr=f;
    if (f== NULL) // isFull?
    {
        printf("Queue is empty\n");
    }
    else
    {
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{

    linkedlistTraversal(f);
    printf("Dequeuing element %d\n",dequeue());
    enqueue(59);
    enqueue(45);
    enqueue(66);
    printf("\nThe linked list\n");
    linkedlistTraversal(f);
    printf("\nDequeuing element %d\n",dequeue());
    printf("\nDequeuing element %d\n",dequeue());
    linkedlistTraversal(f);
    return 0;
}