#include <iostream>
using namespace std;
 
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
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}