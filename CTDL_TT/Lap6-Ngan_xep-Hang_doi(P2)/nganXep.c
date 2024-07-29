#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int *data;
    int top;
    int capacity;
};


void initStack(struct Stack *s, int capacity) {
    s->capacity = capacity;
    s->top = -1;
    s->data = (int *)malloc(capacity * sizeof(int));
}

void push(struct Stack *s, int value) {
    if (s->top < s->capacity - 1) {
        s->data[++(s->top)] = value;
    }
}

int pop(struct Stack *s) {
    if (s->top >= 0) {
        return s->data[(s->top)--];
    }
    return -1;
}

void freeStack(struct Stack *s) {
    free(s->data);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    struct Stack stack;
    initStack(&stack, n);

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        push(&stack, value);
    }

    for (int i = 0; i < m; i++) {
        pop(&stack);
    }

    for (int i = 0; i <= stack.top; i++) {
        printf("%d ", stack.data[i]);
    }
    printf("\n");

    freeStack(&stack);

    return 0;
}
