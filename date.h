#ifndef date_H
#define date_H
#include <iostream>
using namespace std;

class date
{
protected:
	int day;
	int month;
	int year;
public:
	date():day(),month(),year() {}
	date(int a, int b, int c):day(a),month(b),year(c){}

	//setters
	void setDay(int a)
	{
		this -> day = a;
	}
	void setMonth(int b)
	{
		this -> month = b;
	}
	void setYear(int c)
	{
		this -> year = c;
	}
	//getters
	int getDay()const{return this->day;}
	int getMonth()const{return this->month;}
	int getYear()const{return this->year;}
	//operator
	friend ostream &operator << (ostream & out, const date &d)
	{
		out<<d.day<<"-"<<d.month<<"-"<<d.year;
		return out;
	}
	 friend istream &operator >>(istream &in , date &a)
	 {
	     in>>a.day;
	     in>>a.month;
	     in>>a.year;
	 }
	~date(){}


};
#endif
