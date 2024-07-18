#include<iostream>
using namespace std ; 
struct SinhVien
{
    int msv ; 
    int diem ; 
    SinhVien* next ; 
};

void themSinhVien(SinhVien*& dauDanhSach , int msv , int diem){
    SinhVien* sinhVienMoi = new SinhVien();
    SinhVien->msv = msv ; 
    SinhVien->diem = diem ; 
    SinhVien->next = dauDanhSach;
    dauDanhSach = sinhVienMoi ; 
}

void timSinhVien(SinhVien* dauDanhSach , int msv ){
    SinhVien* SinhVienTimThay = dauDanhSach ; 
    while (SinhVienTimThay != nullptr && SinhVienTimThay->msv != msv)
    {
        SinhVienTimThay = SinhVienTimThay->next ; 
    }
    return SinhVienTimThay ;
}

void XoaPhanTu(SinhVien* dauDanhSach){
    while (dauDanhSach != nullptr)
    {
        SinhVien* temp = dauDanhSach ; 
        dauDanhSach = dauDanhSach->next ; 
    }
    
}