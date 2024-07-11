#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int m, n;
    cin >> m >> n;
    int k, l;
    cin >> k >> l;
    if (k <= 0 || l <= 0 || k > n || l > n) {
        cout << "Invalid column indices" << endl;
        return 1;
    }
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        swap(matrix[i][k-1], matrix[i][l-1]);
    }
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0 ; 
}