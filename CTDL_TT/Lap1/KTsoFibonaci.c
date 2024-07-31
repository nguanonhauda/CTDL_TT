#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == fibonacci(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
