// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
public:
	CMyDate();
	CMyDate(int y, int m, int d);
	int setDate(int y, int m, int d);
	void displayDate();
};
CMyDate::CMyDate()
{
	year = 2019;
	month = 1;
	day = 1;
}
CMyDate::CMyDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
int CMyDate::setDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	return 0;
}
void CMyDate::displayDate()
{
	cout << year << "��" << month << "��" << day << "��"<<endl;
}


int main()
{
	CMyDate od;
	od.setDate(2019,4,29);
	od.displayDate();
    return 0;
}

