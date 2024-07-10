#include <iostream>
using namespace std;

int main() {
    int n, MSSV, D;
    cin >> n >> MSSV >> D;

    // Tạo mảng động để lưu trữ mã số sinh viên và điểm thi
    int* msv = new int[n + 1];
    int* diem = new int[n + 1];

    // Đọc n dòng tiếp theo
    for (int i = 0; i < n; i++) {
        cin >> msv[i] >> diem[i];
    }

    // Tìm vị trí để chèn sinh viên mới
    int pos = 0;
    while (pos < n && msv[pos] < MSSV) {
        pos++;
    }

    // Dịch chuyển các phần tử phía sau để dành chỗ cho sinh viên mới
    for (int i = n; i > pos; i--) {
        msv[i] = msv[i - 1];
        diem[i] = diem[i - 1];
    }

    // Chèn sinh viên mới vào đúng vị trí
    msv[pos] = MSSV;
    diem[pos] = D;

    // In ra danh sách sau khi đã chèn sinh viên mới
    for (int i = 0; i <= n; i++) {
        cout << msv[i] << " " << diem[i] << endl;
    }

    // Giải phóng bộ nhớ
    delete[] msv;
    delete[] diem;

    return 0;
}
