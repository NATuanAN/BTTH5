#include <iostream>
using namespace std;

class NhanVien
{
protected:
    string MaNV, Ten;
    float LuongCanBan;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual void TinhTienThuong() = 0;
};