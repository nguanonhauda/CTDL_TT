#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int msv; // Mã số sinh viên
    int diem; // Điểm thi
    struct Node* next; // Con trỏ đến phần tử kế tiếp
} Node;

// Thêm sinh viên vào danh sách liên kết
void themSinhVien(Node** dauDanhSach, int msv, int diem) {
    Node* sinhVienMoi = (Node*)malloc(sizeof(Node));
    sinhVienMoi->msv = msv;
    sinhVienMoi->diem = diem;
    sinhVienMoi->next = *dauDanhSach;
    *dauDanhSach = sinhVienMoi;
}

// Tìm điểm của sinh viên theo mã số
int timSinhVien(Node* dauDanhSach, int msv) {
    Node* sinhVienTimThay = dauDanhSach;
    while (sinhVienTimThay != NULL && sinhVienTimThay->msv != msv) {
        sinhVienTimThay = sinhVienTimThay->next;
    }
    if (sinhVienTimThay != NULL) {
        return sinhVienTimThay->diem;
    } else {
        return -1; // Mã số sinh viên không tìm thấy
    }
}

// Xóa toàn bộ danh sách liên kết
void XoaPhanTu(Node** dauDanhSach) {
    Node* current = *dauDanhSach;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
    *dauDanhSach = NULL;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    Node* dauDanhSach = NULL;

    for (int i = 0; i < n; ++i) {
        int msv, diem;
        scanf("%d %d", &msv, &diem);
        themSinhVien(&dauDanhSach, msv, diem);
    }

    int diemX = timSinhVien(dauDanhSach, x);
    if (diemX != -1) {
        printf("%d\n", diemX);
    } else {
        printf("No data\n");
    }

    XoaPhanTu(&dauDanhSach);
    return 0;
}
