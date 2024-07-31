#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }
    if (x <= 3) {
        return true;
    }
    if (x % 2 == 0 || x % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    scanf("%d", &x);

    if (isPrime(x)) {
        printf("co\n");
    } else {
        printf("khong\n");
    }

    return 0;
}
