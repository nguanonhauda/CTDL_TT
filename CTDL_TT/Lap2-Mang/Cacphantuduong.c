#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    int dem = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            dem++;
        }
    }

    if (dem == 0) {
        printf("Day khong co phan tu duong\n");
    } else {
        printf("%d\n", dem);
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }

    free(a);
    return 0;
}
