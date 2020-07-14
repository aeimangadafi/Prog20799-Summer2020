#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *next;
} node_t;


node_t *front = NULL;
node_t *rear = NULL;


void enqueue(int value) {

}


int main() {
    enqueue (10);
    enqueue (20);
    enqueue (30);
    return 0;
}