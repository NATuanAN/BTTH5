#include <iostream>
using namespace std;

class CNgay
{
    int ngay, thang, nam;

public:
    CNgay() { ngay = thang = nam = 1; }
    CNgay(int Ngay, int Thang)
    {
        ngay = Ngay;
        thang = Thang;
    }
    int getNgay()
    {
        return ngay;
    }
    friend istream &operator>>(istream &is, CNgay &c)
    {
        is >> c.ngay >> c.thang >> c.nam;
        return is;
    }
    friend ostream &operator<<(ostream &os, CNgay c)
    {
        os << c.ngay << c.thang << c.nam;
        return os;
    }
};

int Nhap(int n)
{
    cout << "So da nhap la: ";
    return n;
}
int main()
{
    cout << Nhap(4);
}