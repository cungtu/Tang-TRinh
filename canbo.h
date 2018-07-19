#ifndef CANBO_H_INCLUDED
#define CANBO_H_INCLUDED
#include "nhanvien.h"

class canbo:public nhanvien
{
protected:
    date ngay;
    string phongban;
    float hesoluong;
    int tienphucap;
public:
    canbo ():nhanvien(),phongban(),hesoluong(1.8),tienphucap(){}
    canbo ( nhanvien a,string b, float c, int d):nhanvien(a),phongban(b),hesoluong(c),tienphucap(d){}
    virtual float tinhluong()const
    {
        float kq=this->hesoluong*1.5+this->tienphucap;
        return kq;
    }
    void setdate(int a, int b, int c)
    {
        this->day=a;
        this->month=b;
        this->year=c;
    }
    friend istream &operator >>(istream &in , canbo &a)
    {
        cout<<"phong ban  ::  ";
        in>>a.phongban;
        cout<<"he so luong  :: ";
        in>>a.hesoluong;
        cout<<"tien phu cap :: ";
        in>>a.tienphucap;
        cout<<"ho ten :: ";
        in>>a.hoten;
        cout<<"CMT  :: " ;
        in>>a.CMT;
        cout<<" ngay  thang nam : ";
        in>>a.day;
        in>>a.month;
        in>>a.year;
        return in;
    }

    ~canbo();
};


#endif // CANBO_H_INCLUDED
