#ifndef NHANVIEN_H_INCLUDED
#define NHANVIEN_H_INCLUDED
#include "date.h"
class nhanvien:public date
{
protected:
    string hoten;
    string CMT;
public:
    nhanvien():hoten(),date(),CMT(){}
    nhanvien(string a, date b, string d):hoten(a),date(b),CMT(d){}
    virtual float tinhluong()const ;
    ~nhanvien();


};


#endif // NHANVIEN_H_INCLUDED
