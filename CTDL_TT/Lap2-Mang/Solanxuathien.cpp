#include <iostream>
#include <map>

using namespace std;

const int MAX_N = 1e5; 
int arr[MAX_N];        

int main() {
    int n;
    cin >> n;

    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
        cnt[arr[i]]++;
    }

    cout << cnt.size() << endl; 
    for (const auto& pair : cnt) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}