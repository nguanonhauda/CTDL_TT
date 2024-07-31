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

void deleteNode(LinkedList* list, int k) {
    if (k == 1) {
        Node* temp = list->head;
        list->head = list->head->next;
        free(temp);
    } else {
        Node* current = list->head;
        for (int i = 1; i < k - 1 && current != NULL; ++i) {
            current = current->next;
        }
        if (current != NULL && current->next != NULL) {
            Node* temp = current->next;
            current->next = current->next->next;
            free(temp);
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
    int n, k;
    scanf("%d %d", &n, &k);

    LinkedList list;
    initLinkedList(&list);

    for (int i = 0; i < n; ++i) {
        int value;
        scanf("%d", &value);
        addNode(&list, value);
    }

    deleteNode(&list, k);
    printList(&list);

    freeList(&list);
    return 0;
}
