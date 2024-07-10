
#include <iostream>
 
int main() {
    long long n1, n2;
    std::cin >> n1 >> n2;
 
    int count = 0;
    long long results[1000];
    for (long long i = 0; i <= 1000000; i++) {
        long long value = i * i - 100 * i + 1;
        if (value >= n1 && value <= n2) {
            results[count++] = i;
        }
    }
 
    if (count == 0) {
        std::cout << "vo nghiem\n";
    } else {
        std::cout << count << "\n";
        for (int i = 0; i < count; i++) {
            std::cout << results[i] << " ";
        }
        std::cout << "\n";
    }
 
    return 0;
}