#include <iostream>
#include "Rectangle.h"

// Mutators
void Rectangle::setLength(int l) {
	length = l;
}
void Rectangle::setWidth(int w) {
	width = w;
}

// Accessors
int Rectangle::getLength() {
	return length;
}
int Rectangle::getWidth() {
	return width;
}

// Member functions
int Rectangle::getArea() {
	return length * width;
}

// Constructors
Rectangle::Rectangle() { //default
	length = 0;
	width = 0;
}
Rectangle::Rectangle(int l, int w) {
	length = l;
	width = w;
}