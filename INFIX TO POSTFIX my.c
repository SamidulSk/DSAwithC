//Not sucesesful lol😂😂
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    char *arr;
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

void pop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Underflow");
    }
    else
    {
        ptr->top--;
    }
}
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int operatorPrecedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int stackTop(struct stack *s)
{
    return s->arr[s->top];
}
char *infixTopostfix(char *infix, struct stack *s)
{
 char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (infix[i] != isOperator(i))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (operatorPrecedence(infix[i] > stackTop(s)))
            {
                push(s,infix[i]);
                i++;
            }
            else
            {
                postfix[j] = s->arr[s->top];
                j++;
            }
        }
    }
    while (s->top != s->size - 1)
    {
        postfix[j] = s->arr[s->top];
        j--;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 20;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *infix = "p-q-r/a";
    printf("postfix is %s", infixTopostfix(infix,s));
    return 0;
}