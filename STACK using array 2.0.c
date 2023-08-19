#include<stdio.h>
#include<stdlib.h>
struct stack{
    int*arr;
    int size;
    int top;
};
int isEmpty(struct stack*ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack*ptr)
{
    if (ptr->top == ptr->size-1)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s;
    s->size=6;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    s->arr[0]=7;
    s->top++;
    s->arr[1]=6;
    s->top++;
    s->arr[2]=2;
    s->top++;
    s->arr[3]=9;
    s->top++;
    s->arr[4]=4;
    s->top++;
    s->arr[5]=8;
    s->top++;
    if (isEmpty(s))
    {
        printf("The stack is empty:");
    }
    else 
    {
        printf("The stack is not empty");
    }
    if(isFull(s))
    {
        printf("\nThe stack is full");
    }
    else
    {
        printf("\nThe stack is not full");
    }
return 0;
}