#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Linkedlist {
    Node* head;
} Linkedlist;

Node* taoNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void chenNode(Linkedlist* list, int data, int position) {
    Node* newNode = taoNode(data);
    if (position == 1) {
        newNode->next = list->head;
        list->head = newNode;
    } else {
        Node* cur = list->head;
        for (int i = 1; i < position - 1 && cur != NULL; ++i) {
            cur = cur->next;
        }
        if (cur == NULL) {
            // Position is greater than the length of the list, append at the end
            cur = list->head;
            while (cur->next != NULL) {
                cur = cur->next;
            }
            cur->next = newNode;
        } else {
            newNode->next = cur->next;
            cur->next = newNode;
        }
    }
}

void Print(Linkedlist* list) {
    Node* cur = list->head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);
    Linkedlist list;
    list.head = NULL;
    for (int i = 0; i < n; i++) {
        int ai;
        scanf("%d", &ai);
        chenNode(&list, ai, i + 1);
    }
    chenNode(&list, x, k);
    Print(&list);
    return 0;
}
