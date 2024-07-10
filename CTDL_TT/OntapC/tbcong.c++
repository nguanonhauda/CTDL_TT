#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;

    if (n > 100000) {
        return 1;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    double tb_cong = static_cast<double>(sum) / n;
    cout << fixed << setprecision(3) << tb_cong << endl;

    return 0;
}