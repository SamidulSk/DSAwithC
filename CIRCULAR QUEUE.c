#include <stdio.h>
#include <stdlib.h>
struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q, int val)
{
    if (isFull(q))
    {
        printf("The queue is full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct circularqueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This queue is empty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
        return a;
    }
}
int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 49);
    enqueue(&q, 12);
    // enqueue(&q, 51);
    // printf("Dequeuing element %d\n", dequeue(&q)); //  FIFO
    // printf("Dequeuing element %d\n", dequeue(&q)); //  FIFO
    // printf("Dequeuing element %d\n", dequeue(&q)); //  FIFO
    // printf("Dequeuing element %d\n", dequeue(&q)); //  FIFO
    if (isEmpty(&q))
    {
        printf("Queue is empty");
    }
    if (isFull(&q))
    {
        printf("Queue is full");
    }
    return 0;
}