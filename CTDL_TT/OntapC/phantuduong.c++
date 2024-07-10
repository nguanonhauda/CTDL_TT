#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 100000) {
        return 1;
    }

    vector<int> daySo(n);
    for (int i = 0; i < n; i++) {
        cin >> daySo[i];
    }

    vector<int> phanTuDuong;
    for (int x : daySo) {
        if (x > 0) {
            phanTuDuong.push_back(x);
        }
    }

    if (phanTuDuong.empty()) {
        cout << "Day so khong co phan tu duong" << endl;
    } else {
        cout << phanTuDuong.size() << endl;
        for (int x : phanTuDuong) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}