#include <iostream>
using namespace std;

class SOFITEL
{
protected:
    int SoDem;

public:
    SOFITEL() { SoDem = 0; }
    virtual void Nhap();
    virtual void Xuat();
    virtual int TinhDoanhThu() = 0;
};