#include<iostream>
#include "canbo.h"
#include "nhanvien.h"
#include "date.h"
#include <fstream>
using namespace std;
int main()
{
    date a(19,11,99);
    canbo *mang[3];
   // nhanvien b("d",a,"3");
    fstream fout("canbo.txt",ios::out);
    for (int i=0;i<3;i++)
    {
       cin>>*mang[i];
       fout<<*mang[i];
    }
  // cout<<mang[0].tinhluong();

   /* canbo y(b,"s",3.76,6);
    y.tinhluong();*/
    for (int i=0;i<3;i++)
    {

    }










};

