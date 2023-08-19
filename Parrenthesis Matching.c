#include <stdio.h>
#include <stdlib.h>
struct stack
{
    char *arr;
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
void push(struct stack*ptr,char val){
    if (isFull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack*ptr){
    if (isEmpty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parrenthesisMatch(struct stack*s,char*arr){
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='('){
            push(s,'(');
        }
        else if(arr[i]==')'){
            if(isEmpty(s)){
                return 0;
            }
            else{
                pop(s);
            }
        }
    }
    if(isEmpty(s)){
        return 1;
    }
    else{
        return  0;
    }

}
int main()
{   struct stack*s;                //crate and initialize the stack
    s->size=100;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    char*arr="8(*(9)";
    if (parrenthesisMatch(s,arr))
    {
        printf("The parenthesis is matched.");
    }
    else
    {
        printf("The parenthesis is not match.");
    }

    return 0;
}