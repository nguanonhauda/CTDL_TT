#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x; // Đọc số lượng phần tử và giá trị x

    int dem = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a; // Đọc từng phần tử của dãy
        if (a > x) {
            dem++;
        }
    }

    cout << dem << endl;
    return 0;
}