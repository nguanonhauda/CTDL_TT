#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, MSSV, D;
    scanf("%d %d %d", &n, &MSSV, &D);

    int* msv = (int*)malloc((n + 1) * sizeof(int));
    int* diem = (int*)malloc((n + 1) * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &msv[i], &diem[i]);
    }

    int pos = 0;
    while (pos < n && msv[pos] < MSSV) {
        pos++;
    }

    for (int i = n; i > pos; i--) {
        msv[i] = msv[i - 1];
        diem[i] = diem[i - 1];
    }

    msv[pos] = MSSV;
    diem[pos] = D;

    for (int i = 0; i <= n; i++) {
        printf("%d %d\n", msv[i], diem[i]);
    }

    free(msv);
    free(diem);

    return 0;
}
