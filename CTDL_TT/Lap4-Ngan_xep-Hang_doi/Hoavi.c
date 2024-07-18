#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;  
}

void hoanVi(int *arr, int n, int *perm, int *visited, int level) {
    if (level == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", perm[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            perm[level] = arr[i];
            push(arr[i]);
            hoanVi(arr, n, perm, visited, level + 1);
            pop();
            visited[i] = 0;
        }
    }
}

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int perm[n];
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    hoanVi(arr, n, perm, visited, 0);

    return 0;
}
