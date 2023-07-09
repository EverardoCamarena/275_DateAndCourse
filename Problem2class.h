#ifndef PROBLEM2CLASS_H
#define PROBLEM2CLASS_H
 
#include <iostream>
#include <string>

using namespace std;


class Shape
{
    private:
        double Area;
    public:
        void setArea(double);
        double getArea() const; 
        virtual double calcArea ();
        virtual draw();
};

class Circle :: Shape
{
    private:
        int centerX;
        int centerY; 
        int radius;
    public:
        void setCenterX(int);
        void setCenterY(int);
        void setRadius(int);
        int getRadius() const;
        int getCenterY() const;
        int getCenterX() const;
        double calcArea ();
};
class Rectangle :: Shape
{
    private:
        int centerX;
        int centerY; 
        int width;
        int height;
    public:
        void setCenterX(int);
        void setCenterY(int);
        void setWidth(int);
        void setHeight(int);
        int getHeight() const;
        int getWidth() const;
        int getCenterY() const;
        int getCenterX() const;
        double calcArea ();

};
#endif