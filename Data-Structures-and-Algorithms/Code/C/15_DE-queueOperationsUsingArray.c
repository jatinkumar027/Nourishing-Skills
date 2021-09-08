//Insertion from Rear + Front
//Deletion from Rear + Front

// Two types of DEqueue are available:
// 1. Restricted Input DEqueue - Insetion from Front not allowed
// 2. Restricted Output DEqueue -  Deletion from Rear not allowed

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

struct DEqueue{
    int size;
    int front;
    int rear;
    int * arr;
};

bool isFull(struct DEqueue* queue){
    if(queue->rear == queue->size - 1){
        return true;
    }
    return false;
}

bool isEmpty(struct DEqueue* queue){
    if(queue->front == queue->rear){
        return true;
    }
    return false;
}

bool enqueueFront(struct DEqueue* queue, int element){
    if(isFull(queue)){
        printf("Queue is Full!\n");
        return false;
    }
    if(queue->front > -1){
        queue->front --;
        queue->arr[queue->front] = element;
        printf("Enqued element: %d\n", element);
        return true;
    }
    else{
        printf("Cannot insert at Front!\n");
        return false;        
    }
}

bool enqueueRear(struct DEqueue* queue, int element){
    if(isFull(queue)){
        printf("Queue is Full!\n");
        return false;
    }
    queue->rear ++;
    queue->arr[queue->rear] = element;
    printf("Enqued element: %d\n", element);
    return true;
}

int dequeueFront(struct DEqueue *queue){
    if(isEmpty(queue)){
        printf("Queue is Empty!\n");
        return INT_MIN;
    }
    queue->front++;
    int dequeued = queue->arr[queue->front];
    return dequeued;
}

int dequeueRear(struct DEqueue *queue){
    if(isEmpty(queue)){
        printf("Queue is Empty!\n");
        return INT_MIN;
    }
    int dequeued = queue->arr[queue->rear];
    queue->rear--;
    return dequeued;
}

void display_queue(struct DEqueue *queue){
    int f = queue->front;
    if(f==-1){
        f = queue->front + 1;
    }
    while(f!=queue->rear+1){
        printf("%d ",queue->arr[f]);
        f++;
    } 
}

int main()
{
    struct DEqueue *qu;
    qu = (struct DEqueue *)malloc(sizeof(struct DEqueue));
    qu->size = 10;
    qu->front = -1;
    qu->rear = -1;
    qu->arr = (int *)malloc(sizeof(int)*qu->size);

    enqueueRear(qu,1);
    enqueueRear(qu,2);
    enqueueRear(qu,3);
    enqueueRear(qu,4);
    enqueueRear(qu,5);
    enqueueFront(qu,13);
    printf("Queue till now\n");
    display_queue(qu);
    printf("\nDequeuing element %d\n", dequeueFront(qu));
    printf("Dequeuing element %d\n", dequeueFront(qu));
    printf("Dequeuing element %d\n", dequeueFront(qu)); 
    printf("Dequeuing element %d\n", dequeueRear(qu));
    printf("Dequeuing element %d\n", dequeueRear(qu)); 
    enqueueFront(qu,14);
    enqueueFront(qu,15);
    enqueueRear(qu,6);
    enqueueRear(qu,7);
    enqueueRear(qu,8);
    enqueueRear(qu,9);
    enqueueRear(qu,10);
    display_queue(qu);
    return 0;
}