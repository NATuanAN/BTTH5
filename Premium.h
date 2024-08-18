#include "Business.h"
class Premium : public SOFITEL
{
protected:
    int PhiDichVu;

public:
    int TinhDoanhThu() override;
    void Nhap() override;
    void Xuat() override;
};