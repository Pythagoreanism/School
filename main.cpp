// ConsoleApplicationTestClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Rectangle.h"
using namespace std;


int main() {

    cout << "Hello World!" << endl;

    Rectangle r1(8, 4); // First object "r1" initialized 

    cout << "Initalized values\n" << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: "  << r1.getWidth()  << endl;
    cout << "Area: " << r1.getArea() << endl;

    r1.setLength(3); // Changed values using mutator
    r1.setWidth(5);

    cout << "\nUpdated values\n" << endl;
    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: "  << r1.getWidth()  << endl;
    cout << "Area: "   << r1.getArea()   << endl;

    return 0;
}
