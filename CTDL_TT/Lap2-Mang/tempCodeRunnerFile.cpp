#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int dem = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > x) {
            dem++;
        }
    }

    cout << dem << endl;
    return 0;
}