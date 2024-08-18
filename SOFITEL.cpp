#include "Deluxe.h"
int DoanhThuBusiness = 0;
int DoanhThuPremium = 0;
int DoanhThuDeluxe = 0;
void SOFITEL::Nhap()
{
    cout << "Nhap So dem: ";
    cin >> SoDem;
}
void SOFITEL::Xuat()
{
    cout << "So dem o la: " << SoDem << endl;
    cout << "Doanh thu la: " << TinhDoanhThu() << endl;
}

void Business::Nhap()
{
    SOFITEL::Nhap();
    DoanhThuBusiness += TinhDoanhThu();
}
void Premium::Nhap()
{
    SOFITEL::Nhap();
    cout << "Nhap phi dich vu: ";
    cin >> PhiDichVu;
    DoanhThuPremium += TinhDoanhThu();
}
void Deluxe::Nhap()
{
    Premium::Nhap();
    cout << "Nhap phi phuc vu: ";
    cin >> PhiPhucVu;
    DoanhThuDeluxe += TinhDoanhThu();
}
void Premium::Xuat()
{
    SOFITEL::Xuat();
    cout << "Da bao gom:\n";
    cout << "Phi dich vu la: " << PhiDichVu << endl;
}
void Deluxe::Xuat()
{
    Premium::Xuat();
    cout << "Phi phuc vu la: " << PhiPhucVu << endl;
}
int Business::TinhDoanhThu()
{
    return SoDem * 300000;
}
int Premium::TinhDoanhThu()
{
    return SoDem * 500000 + PhiDichVu;
}
int Deluxe::TinhDoanhThu()
{
    return SoDem * 750000 + PhiDichVu + PhiPhucVu;
}

int main()
{
    SOFITEL **DanhSach = new SOFITEL *[5];
    int n;
    cout << "Tien hanh nhap danh sach" << endl;
    cout << "Nhap 1 de chon loai phong Business" << endl;
    cout << "Nhap 2 de chon loai phong Premium" << endl;
    cout << "Nhap 3 de chon loai phong Deluxe" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nhap loai phong: ";
        cin >> n;
        if (n == 1)
        {
            DanhSach[i] = new Business;
            DanhSach[i]->Nhap();
        }
        if (n == 2)
        {
            DanhSach[i] = new Premium;
            DanhSach[i]->Nhap();
        }
        if (n == 3)
        {
            DanhSach[i] = new Deluxe;
            DanhSach[i]->Nhap();
        }
    }
    for (int i = 0; i < 5; i++)
    {
        DanhSach[i]->Xuat();
    }
    int x = max(max(DoanhThuPremium, DoanhThuDeluxe), DoanhThuBusiness);
    if (x = DoanhThuBusiness)
    {
        cout << "Loai phong co doanh thu cao nhat la Business voi gia tri la: " << x;
    }
    if (x = DoanhThuPremium)
    {
        cout << "Loai phong co doanh thu cao nhat la Premium voi gia tri la: " << x;
    }
    if (x = DoanhThuDeluxe)
    {
        cout << "Loai phong co doanh thu cao nhat la Deluxe voi gia tri la: " << x;
    }
}