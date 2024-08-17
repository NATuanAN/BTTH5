#include "Quanli.h"

class KySu : public NhanVien
{
    float TiLeThuong;

public:
    void Nhap() override;
    void Xuat() override;
    void TinhTienThuong();
};