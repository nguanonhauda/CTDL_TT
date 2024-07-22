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

void xoaNode(struct Listnode **head, int index) {
   struct Listnode *cur, *pre ; 
   if ( index == 0 ){
    cur = *head ; 
    *head = cur->next ; 
    free(cur) ; 
   }else {
    pre = findNode(*head , index - 1 ) ;
    cur = pre->next ; 
    pre->next = cur->next ;
    free(cur) ;
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
    int n, k;

    scanf("%d %d", &n, &k);

    nhapDanhSach(&head, n);
    xoaNode(&head, k);
    inDanhSach(head);

    return 0;
}
