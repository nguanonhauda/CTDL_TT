#include <stdio.h>
#include <stdlib.h>

struct Listnode {
    int data;
    struct Listnode *next;
};

void nhapDanhSach(struct Listnode **head, int n) {
    struct Listnode *newnode, *temp;
    *head = NULL;

    for (int i = 0; i < n; i++) {
        newnode = (struct Listnode*)malloc(sizeof(struct Listnode));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (*head == NULL) {
            *head = newnode;
        } else {
            temp->next = newnode;
        }
        temp = newnode;
    }
}

struct Listnode *findNode(struct Listnode *head, int index) {
    struct Listnode *cur = head;
    int count = 1;

    while (cur != NULL && count < index) {
        cur = cur->next;
        count++;
    }

    return cur;
}

void chenNode(struct Listnode **head, int index, int value) {
    struct Listnode *cur, *newNode;
    newNode = (struct Listnode*)malloc(sizeof(struct Listnode));
    newNode->data = value;

    if (*head == NULL || index == 1) {
        newNode->next = *head;
        *head = newNode;
    } else {
        cur = findNode(*head, index - 1);
        if (cur != NULL) {
            newNode->next = cur->next;
            cur->next = newNode;
        } else {
            free(newNode); 
        }
    }
}

void inDanhSach(struct Listnode *head) {
    struct Listnode *cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

int main() {
    struct Listnode *head = NULL;
    int n, k, x;

    scanf("%d %d %d", &n, &k, &x);

    nhapDanhSach(&head, n);

    chenNode(&head, k, x);

    inDanhSach(head);

    return 0;
}
