#include "Nhanvien.h"

class QuanLi : public NhanVien
{
    int SoGioLamThem;

public:
    void Nhap() override;
    void Xuat() override;
    void TinhTienThuong();
};