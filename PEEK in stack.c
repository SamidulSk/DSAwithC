#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int*arr;
};
int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
     return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack*ptr,int val){
    if (isFull(ptr)){
        printf("Stack Overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){
    if (isEmpty(ptr)){
        printf("Stack Underflow");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack*ptr,int i){
    int arrayInd=ptr->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return ptr->arr[arrayInd];
    }
}
int lastVal(struct stack*sp){
      return sp->arr[0];
}
int firstVal(struct stack*sp){
    return sp->arr[sp->top];
}
int main()
{
    struct stack *sp;
    sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    printf("Stack has been created succesfully\n");
    push(sp,45);
    push(sp,12);
    push(sp,78);
    push(sp,32);
    push(sp,55);
   // printf("%d\n",isFull(sp));
   // printf("%d\n",isEmpty(sp));
    printf("Poped %d from the stack\n",pop(sp));
    pop(sp);
    for(int j=1;j<=sp->top+1;j++)
    {
        printf("The value at position %d is %d\n",j,peek(sp,j));
    }
    printf("The first value of stack is %d\n",firstVal(sp));
    printf("The last value of stack is %d\n",lastVal(sp));
    
    return 0;
}