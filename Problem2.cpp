/*
Pure adstract base class called shape
- private members: area
- public member functions: getArea, setArea, calcArea (virtual function), and draw()
Derived class from Shape called Circle:
- private members: centerX, centerY, radius
- public member functions: constructor takes centerX, centerY, radius as parameters, getter/setter for private members, override calcArea and draw function
Derived class from Shape called Rectangle:
- private members: width, height, centerX, centerY
- public member functions: constructor takes width, height, centerX, and centerY as parameters, getter/setter for private members, override calcArea and draw function
After you implement all the classes above, write a main function that create an array of Shape and add different Circle and Rectangle with different sizes into this array.
NOTE: When drawing the shapes, you can use a 2D array to act as a coordinate system. Do not use any graphics library.
*/
#include <iostream>
#include <string>
#include "Problem2class.cpp"
#include "Problem2class.h"
using namespace std;

int main (){
    Shape *Sha;
    Circle Cir;
    Rectangle Rec;
    string pickShape = "";

    // ask the user shape type
    while( pickShape != "R" ||"r" || "C" || "c" ){
        cout << "Type R for Rectangle or a C for Circle: ";
        cin >> pickShape;
        cout << endl;
        if(pickShape != "R" ||"r" || "C" || "c" ){
            cout << "your answer is invalid please try agian."<< endl;
        }
    }
    // ask size of the shape
    if (pickShape == "R" ||"r"){
        Sha = &Rec;
        int hHeight;
        int wWidth;
        cout << "what is the hight of the Rectangle: ";
        cin >> hHeight;
        cout << endl;
        cout << "what is the width of the Rectangle: ";
        cin >> wWidth;
        cout << endl;
        Rec.setHeight(hHeight);
        Rec.setWidth(wWidth);
    }
    else if (pickShape == "C" ||"c"){
        Sha = &Cir;
        int rRadius;
        cout << "what is the radius of the circle: ";
        cin >> rRadius;
        cout << endl;
        Cir.setRadius(rRadius);
    }

    // calculation
    Sha.calcArea();

    // output
    if(pickShape == "C" ||"c"){
    cout << "the Area of the Circle is " << Sha.getArea() << " unit sqare"
    }
    else if(pickShape == "R" ||"r"){
    cout << "the Area of the Rectangle is " << Sha.getArea() << " unit sqare"
    }
    return 0;
}