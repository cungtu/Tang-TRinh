#ifndef GIAOVIEN_H_INCLUDED
#define GIAOVIEN_H_INCLUDED
#include "nhanvien.h"
class giaovien
{
protected:
    string khoa;
    double hesoluong;

    int tienday;
public:
    giaovien():nhanvien(),hesoluong(2.34),tienday(){}
    giaovien(nhanvien a, string b, double c, int d):nhanvien(a),hesoluong(b),tienday(c){}
     virtual float tinhluong()const
     {
        float kq=this->hesoluong*1+this->tienday;
        return kq;
     }
     ~giaovien();

};


#endif // GIAOVIEN_H_INCLUDED
