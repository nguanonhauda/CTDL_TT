#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, k, l;
    scanf("%d %d", &m, &n);
    scanf("%d %d", &k, &l);

    if (k <= 0 || l <= 0 || k > n || l > n) {
        printf("Invalid column indices\n");
        return 1;
    }

    int **matrix = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; ++i) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; ++i) {
        int temp = matrix[i][k-1];
        matrix[i][k-1] = matrix[i][l-1];
        matrix[i][l-1] = temp;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; ++i) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
