#include "Kysu.h"

void NhanVien::Nhap()
{
    cout << "Nhap Ma nhan vien: ";
    getline(cin, MaNV);
    cout << "Nhap Ten nhan vien: ";
    getline(cin, Ten);
    cout << "Nhap luong can ban cua nhan vien: ";
    cin >> LuongCanBan;
}
void NhanVien::Xuat()
{
    cout << "Ma so nhan vien la: " << MaNV << endl;
    cout << "Ten nhan vien la: " << Ten << endl;
    cout << "Luong can ban nhan vien la: " << LuongCanBan << endl;
}
void KySu::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap ti le thuong: ";
    cin >> TiLeThuong;
}
void KySu::Xuat()
{
    NhanVien::Xuat();
    TinhTienThuong();
}
void KySu::TinhTienThuong()
{
    cout << "Tien thuong cua nhan vien la: " << LuongCanBan * TiLeThuong;
}
void QuanLi::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> SoGioLamThem;
}
void QuanLi::Xuat()
{
    NhanVien::Xuat();
    TinhTienThuong();
}
void QuanLi::TinhTienThuong()
{
    cout << "Tien thuong cua nhan vien la: " << LuongCanBan + SoGioLamThem * 100000;
}

int main()
{
    NhanVien *s1;
    s1 = new KySu;
    s1->Nhap();
    s1->Xuat();
    NhanVien *s2;
    s2 = new QuanLi;
    s2->Nhap();
    s2->Xuat();
}