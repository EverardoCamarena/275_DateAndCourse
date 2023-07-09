#include "Problem2class.h"
#include <iostream>


using namespace std;
/*
class Shape
{
    private:
        double Area;
    public:
        void setArea(double);
        double getArea() const; 
        double calcArea (virtual function);
        draw(virtual function);
}

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

}
*/
///////////////////// Circle class//////////////////////
void Circle :: setCenterX(int CenterX){
    centerX = CenterX;
}
void Circle :: setCenterY(int CenterY){
    centerY = CenterY;
}
void Circle ::setRadius(int Radius){
    radius = Radius;
}
int Circle :: getRadius() const{
    return radius;
}
int Circle :: getCenterY() const{
    return centerY;
}
int Circle ::getCenterX() const{
    return centerX;
}

/////////////////// Rectangle class////////////

void Rectangle :: setCenterX(int CenterX){
    centerX = CenterX;
}
void Rectangle :: setCenterY(int CenterY){
    centerY = CenterY;
}
void Rectangle :: setWidth(int Width){
    width = Width;
}
void Rectangle ::setHeight(int Height){
    height = Height;
}
int Rectangle :: getHeight() const{
    return height;
}
int Rectangle :: getWidth() const{
    return width;
}
int Rectangle :: getCenterY() const{
    return centerY;
}
int Rectangle :: getCenterX() const{
    return centerX;
}

////////////////Shape classs////////////////
double Shape:: getArea(){
    return Area;
}
double Shape :: calcArea(){
    setArea(0.0);
}
double Circle :: calcArea(){
    int RAD = getRadius();
    double pi = 2*cos(0.0);
    double ARE = RAD*(pi^2);
    setArea(ARE);
}
double Rectangle :: calcArea(){
    int WID = getWidth();
    int HEI = getHeight();
    double ARE = WID * HEI;
    setArea(ARE);
}
void Shape:: setArea(double area){
    Area = area;
}