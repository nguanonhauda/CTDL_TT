#include <iostream>
using namespace std;

const int MAX_R = 100; 
const int MAX_C = 100;  

int main() {
    int m, n; 
    cin >> m >> n;

    if (m <= 0 || m > MAX_R || n <= 0 || n > MAX_C) {
        return 1; 
    }

    int arr[MAX_R][MAX_C]; 

    // Nhập mảng
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // In mảng
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }

    return 0;
}