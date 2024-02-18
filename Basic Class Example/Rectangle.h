// .h is a header file for a class, this file includes the class definition and the function declarations
#pragma once
#ifndef RECTANGLE_H // "If defined"
#define RECTANGLE_H

using namespace std;

class Rectangle {

	private:
		int length, width;

	public:
		// Mutators
		void setLength(int l);
		void setWidth(int w);

		// Accessors
		int getLength();
		int getWidth();

		// Member functions
		int getArea();

		// Constructors
		Rectangle(); // default
		Rectangle(int l, int w);

};

#endif // "End if statement"