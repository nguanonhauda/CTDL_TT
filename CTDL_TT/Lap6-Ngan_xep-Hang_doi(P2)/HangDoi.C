#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int front, rear, capacity;
} Queue;

void initQueue(Queue *q, int initialCapacity) {
    q->data = (int *)malloc(initialCapacity * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->capacity = initialCapacity;
}

int isEmptyQueue(Queue *q) {
    return q->front > q->rear;
}

void enqueue(Queue *q, int value) {
    if (q->rear == q->capacity - 1) {
        int newCapacity = q->capacity * 2;
        q->data = (int *)realloc(q->data, newCapacity * sizeof(int));
        q->capacity = newCapacity;
    }
    q->data[++(q->rear)] = value;
}

int dequeue(Queue *q) {
    if (!isEmptyQueue(q)) {
        return q->data[(q->front)++];
    }
    return -1;  
}

int main() {
    Queue q;
    int n;
    scanf("%d", &n);

    initQueue(&q, n);

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        enqueue(&q, value);
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", dequeue(&q));
    }
    printf("\n");
    free(q.data);

    return 0;
}
