#include <iostream>
using namespace std;
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "RightTriangle.h"

int main(int argv, char **argc)
{
	Polygon *pPtr;
	Line diameter(0, 0, 0, 6);
	Circle c1(diameter);
	pPtr = &c1;
	cout << "Circle Area is: " << c1.getArea() << ", and Perimeter is: " << c1.getPerimeter() << endl;
	cout << "Circle Area is: " << pPtr->getArea() << ", and Perimeter is: " << pPtr->getPerimeter() << endl;

	Line width(0, 0, 0, 6);
	Line length(0, 0, 0, 10);
	Rectangle r1(width, length);
	pPtr = &r1;
	cout << "Circle Area is: " << r1.getArea() << ", and Perimeter is: " << r1.getPerimeter() << endl;
	cout << "Rectangle Area is: " << pPtr->getArea() << ", and Perimeter is: " << pPtr->getPerimeter() << endl;

	Line base(0,0,0,6);
	Line height(0,6,6,6);
	Line hyp(0,0,6,6);
	RightTriangle rt(base,height,hyp);
	pPtr = &rt;
	cout << "Right Triangle Area is: " << rt.getArea() << ", and Perimeter is: " << rt.getPerimeter() << endl;
	cout << "Right Triangle Area is: " << pPtr->getArea() << ", and Perimeter is: " << pPtr->getPerimeter() << endl;


	return 0;
}
