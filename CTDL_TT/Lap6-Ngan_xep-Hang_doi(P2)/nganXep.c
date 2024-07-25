#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Linkedlist {
    struct Node *head;
    struct Node *tail;
    int size;
};

struct queue {
    struct Linkedlist ll;
};

void enqueue(struct queue *q, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (q->ll.size == 0) {
        q->ll.head = newNode;
        q->ll.tail = newNode;
    } else {
        q->ll.tail->next = newNode;
        q->ll.tail = newNode;
    }
    q->ll.size++;
}

struct Node *dequeue(struct queue *q) {
    struct Node *temp;
    if (q->ll.head != NULL) {
        temp = q->ll.head;
        q->ll.head = q->ll.head->next;
        if (q->ll.head == NULL) {
            q->ll.tail = NULL;
        }
        q->ll.size--;
        return temp;
    } else {
        return NULL;
    }
}

void inDanhSach(struct Node *head) {
    struct Node *cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    struct queue q;
    q.ll.head = NULL;
    q.ll.tail = NULL;
    q.ll.size = 0;

    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        enqueue(&q, value);
    }

    for (int i = 0; i < m; i++) {
        struct Node *temp = dequeue(&q);
        free(temp);
    }

    inDanhSach(q.ll.head);
    while (q.ll.size > 0) {
        struct Node *temp = dequeue(&q);
        free(temp);
    }

    return 0;
}
