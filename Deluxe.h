#include "Premium.h"
class Deluxe : public Premium
{
    int PhiPhucVu;

public:
    int TinhDoanhThu() override;
    void Nhap() override;
    void Xuat() override;
};