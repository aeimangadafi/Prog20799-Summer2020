#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



typedef struct queue {
    int rear;
    int front;
    int size;
    int *data;
} queue_t;


queue_t *CreateQueue(int size) {
    queue_t *queue;
    queue = (queue_t *) malloc(sizeof(queue_t));
    queue->size = size;
    queue->rear = 0;
    queue->front = 0;
    queue->data = (int *) malloc(size * sizeof(int));
    return queue;
}

bool isFull(queue_t *queue) {
    return (queue->rear+1)%queue->size == queue->front;
}

bool isEmpty(queue_t *queue) {
    return queue->rear == queue->front;
}

void enqueue(queue_t *queue, int value) {
    if (isFull(queue)) {
        printf("the queue is full\n");
        return;
    }
    queue->rear = (queue->rear + 1 )%queue->size;
    queue->data[queue->rear] = value;
}

void printQueue(queue_t *queue){
    register int i = (queue->front + 1 )%queue->size;
    do
    {
        printf("%d ", queue->data[i]);
        i = (i + 1 )%queue->size;
    } while (i != (queue->rear + 1 )%queue->size);

   printf("\n");

}


int dequeue(queue_t *queue) {
    if (isEmpty(queue)) {
        printf("the queue is empty\n");
        return;
    }
    queue->front = (queue->front + 1 )%queue->size;
    int returned = queue->data[queue->front];
    return returned;
}




int main() {

    return 0;
}
