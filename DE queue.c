// DE queue all operations
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;                   // check this code before use
    int f;
    int r;
    int*arr;
};
void traversal(struct queue*q){
    for(int i=0;i<5;i++)
    {
        printf("%d\n",q->arr[i]);
        i++;
    }
}
int isEmpty(struct queue*q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int isFull(struct queue*q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
    
}
void enqueueR(struct queue *q,int val){
    if(isFull(q)){
        printf("The queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
void enqueueF(struct queue *q,int val){
    if(isFull(q)){
        printf("The queue is full");
    }
    else{
        q->f--;
        q->arr[q->f]=val;
    }
}
int dequeueF(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        return 0;
    }
    else{
        a=q->arr[q->f];
        q->f++;
        return a;
    }
}
int dequeueR(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        return 0;
    }
    else{
        a=q->arr[q->r];
        q->r--;
        return a;
    }
}
int main()
{
    struct queue q;
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }

    enqueueR(&q,12);
    enqueueF(&q,49);
    traversal(&q);
   printf("Dequeuing element %d\n",dequeueR(&q));
   printf("Dequeuing element %d\n",dequeueF(&q));
   traversal(&q);

return 0;
}