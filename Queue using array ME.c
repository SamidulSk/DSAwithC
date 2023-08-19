//Very easy lol
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int *arr;
    int f;
    int r;
};
void queueTraverse(struct queue*q){
    for(int i=q->f+1;i<=q->r;i++){
        printf("%d\t",q->arr[i]);
    }
}
int isEmpty(struct queue*q){
    if(q->f==q->r){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct queue*q){
    if(q->r==q->size-1){
        return 1;
    }return 0;
}
void Enqueue(struct queue*q,int val){
    if(isfull(q)){
        printf("queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int Dequeue(struct queue*q){
    if(isEmpty(q)){
        printf("queue is empty");
    }
    else{
        int val;
        q->f++;
        val=q->arr[q->f];
        return val;

    }
}
int main()
{
    struct queue*q;
    q->size=50;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    Enqueue(q,51);
    Enqueue(q,12);
    Enqueue(q,59);
    Enqueue(q,78);
    Enqueue(q,99);
    Dequeue(q);
   printf("\nThe dequeued element is %d",Dequeue(q));
   printf("\nThe Elements of queue is now \n");
   queueTraverse(q);
return 0;
}