#include <iostream>
using namespace std;

int main() {
    int n, MSSV, D;
    cin >> n >> MSSV >> D;

    int* msv = new int[n + 1];
    int* diem = new int[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> msv[i] >> diem[i];
    }

    int pos = 0;
    while (pos < n && msv[pos] < MSSV) {
        pos++;
    }

    for (int i = n; i > pos; i--) {
        msv[i] = msv[i - 1];
        diem[i] = diem[i - 1];
    }

   
    msv[pos] = MSSV;
    diem[pos] = D;

  
    for (int i = 0; i <= n; i++) {
        cout << msv[i] << " " << diem[i] << endl;
    }

   
    delete[] msv;
    delete[] diem;

    return 0;
}
