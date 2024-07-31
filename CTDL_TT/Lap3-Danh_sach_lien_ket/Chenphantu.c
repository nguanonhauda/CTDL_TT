#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} LinkedList;

void initLinkedList(LinkedList* list) {
    list->head = NULL;
}

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addNode(LinkedList* list, int value) {
    if (list->head == NULL) {
        list->head = createNode(value);
    } else {
        Node* current = list->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = createNode(value);
    }
}

void insertNode(LinkedList* list, int position, int value) {
    Node* newNode = createNode(value);
    if (position == 1) {
        newNode->next = list->head;
        list->head = newNode;
    } else {
        Node* current = list->head;
        for (int i = 0; i < position - 2 && current != NULL; i++) {
            current = current->next;
        }
        if (current != NULL) {
            newNode->next = current->next;
            current->next = newNode;
        }
    }
}

void printList(LinkedList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void freeList(LinkedList* list) {
    Node* current = list->head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    list->head = NULL;
}

int main() {
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);

    LinkedList list;
    initLinkedList(&list);

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        addNode(&list, value);
    }

    insertNode(&list, k, x);
    printList(&list);

    freeList(&list);
    return 0;
}
