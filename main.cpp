#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

const int NUM_MONTHS = 12;

class Date
{
private:
int month;
int day;
int year;

string names[NUM_MONTHS];

void setNames();

public:
// Constructors
Date();
Date(int, int, int);

// Mutators
void setMonth(int m);
void setDay(int d);
void setYear(int y);

// Functions to print the date
void showDate1();
void showDate2();
void showDate3();
};

Date::Date()
{
setNames();
}
Date::Date(int m, int d, int y)
{
setMonth(m);
setDay(d);
setYear(y);
setNames();
}
void Date::setNames()
{
names[0] = "January";
names[1] = "Febraury";
names[2] = "March";
names[3] = "April";
names[4] = "May";
names[5] = "June";
names[6] = "July";
names[7] = "August";
names[8] = "September";
names[9] = "October";
names[10] = "November";
names[11] = "December";
}

void Date::setMonth(int m)
{
if (m >= 1 && m <= 12)
month = m;
else
{
   throw;
}
}

void Date::setDay(int d)
{
if (d >= 1 && d <= 31)
day = d;
else
{
   throw;
}
}

void Date::setYear(int y)
{
year = y;
}

void Date::showDate1()
{
cout << month << "/"
<< day << "/"
<< year << endl;
}

void Date::showDate2()
{
cout << names[month+1]
<< " " << day << ", "
<< year << endl;
}

void Date::showDate3()
{
cout << day << " "
<< names[month+1]
<< " " << year << endl;
}

int main()
{

Date d;
Date today(4, 10, 2022)


try{
today.setMonth(13);//for invalid date
today.setDay(32);
}
catch(Invalid &e)
{
   cout<<e.msg()<<endl;
}
today.setYear(2022);

today.showDate2();

today.showDate3();
return 0;
}