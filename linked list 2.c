// store 5,2,64,32,45,1,25 in a link list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
void display(struct Node*ptr){
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->Next;
    }
}

int main()
{
    struct Node *Head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    Head = (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));
    Head->data=5;
    Head->Next=second;
    second->data=2;
    second->Next=third;
    third->data=64;
    third->Next=fourth;
    fourth->data=32;
    fourth->Next=fifth;
    fifth->data=45;
    fifth->Next=sixth;
    sixth->data=1;
    sixth->Next=seventh;
    seventh->data=25;
    seventh->Next=NULL;
    display(Head);
    return 0;
} 