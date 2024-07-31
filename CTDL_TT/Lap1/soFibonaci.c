#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int a = 1, b = 1, fib;
    for (int i = 3; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}
