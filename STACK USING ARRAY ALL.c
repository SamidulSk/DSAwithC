#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int *arr;
    int top;
};
void isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is in underflow condition\n");
    }
    else
    {
        printf("Stack is ready to pop\n");
    }
}
void isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("Stack is in overflow condition\n");
    }
    else
    {
        printf("Stack is ready to push\n");
    }
}
void push(struct stack *ptr, int val)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void stackTraverse(struct stack *ptr)
{
    for (int i = ptr->top; i >= 0; i--)
    {
        printf("%d\n", ptr->arr[i]);
    }
}
void pop(struct stack*ptr){
    if(ptr->top==-1){
        printf("Underflow");
    }
    else{
    ptr->top--;
    }
}
int peek(struct stack*ptr,int i){
    int arrInd=ptr->top-i+1;
    return ptr->arr[arrInd];
}
int main()
{
    struct stack *s;
    s->size = 50;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    isEmpty(s);
    isFull(s);
    push(s, 9);
    push(s, 21);
    push(s, 3);
    push(s, 7);
    push(s, 45);
    push(s, 12);
    stackTraverse(s);
    pop(s);
    pop(s);
    printf("\nStack after pop the top element\n");
    stackTraverse(s);
    int i;
    printf("Enter the index no which you want to saw the element\n");
    scanf("%d",&i);
    printf("Element in %d index is %d\n",i,peek(s,i));
    return 0;
}