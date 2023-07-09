#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<string>
using namespace std;

class Invalid
{
public:
   Invalid();
   string msg()
   {
string str="Invalid Day or Month";
       return str;
   }
};
#endif