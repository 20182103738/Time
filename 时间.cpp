// test6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMyDate
{
private:
	int year;
	int month;
	int day;
	int check();
public:
	CMyDate();
	~CMyDate();
	CMyDate(int y, int m, int d);
	void setMyDate(int y, int m, int d);
	void display();
};
CMyDate::CMyDate()
{
	cout << " " << year << "." << " " << month << "." << " " << day << endl;
}
CMyDate::~CMyDate()
{
	cout << " " << year << "." << " " << month << "." << " " << day << endl;
}
CMyDate::CMyDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CMyDate::setMyDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void CMyDate::display()
{
	cout << " " << year << "." << " " << month << "." << " " << day << endl;
}

int main()
{
	CMyDate om(2019, 5, 13);
	om.display();
    return 0;
}

