#include <stdio.h>

int main() {
    long long n1, n2;
    scanf("%lld %lld", &n1, &n2);

    int count = 0;
    long long results[1000];
    for (long long i = 0; i <= 1000000; i++) {
        long long value = i * i - 100 * i + 1;
        if (value >= n1 && value <= n2) {
            results[count++] = i;
        }
    }

    if (count == 0) {
        printf("vo nghiem\n");
    } else {
        printf("%d\n", count);
        for (int i = 0; i < count; i++) {
            printf("%lld ", results[i]);
        }
        printf("\n");
    }

    return 0;
}
