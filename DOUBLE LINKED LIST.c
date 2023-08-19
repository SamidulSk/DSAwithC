#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void linkedlistTraversal(struct Node*p,struct Node*q){
    while(p!=NULL)
    {
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    while(q!=NULL)
    {
         printf("%d\t",q->data);
        q=q->prev;
    }
}
int main()
{
    struct Node *N1;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;

    N1 = (struct Node *)malloc(sizeof(struct Node));
    N2 = (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));
    N4 = (struct Node *)malloc(sizeof(struct Node));

    N1->data = 2;
    N1->prev = NULL;
    N1->next = N2;
    N2->data = 3;
    N2->prev = N1;
    N2->next = N3;
    N3->data = 5;
    N3->prev = N2;
    N3->next = N4;
    N4->data = 9;
    N4->prev = N3;
    N4->next = NULL;
    linkedlistTraversal(N1,N4);
}