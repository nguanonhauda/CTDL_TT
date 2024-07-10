#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long sum = 0;
    int count = 0;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] >= 0) {
            sum += arr[i];
            ++count;
        }
    }
    
    if (count == 0) {
        cout << "0.000" << endl;
    } else {
        double tb_cong = static_cast<double>(sum) / count;
        cout << fixed << setprecision(3) << tb_cong << endl;
    }
    
    return 0;
}