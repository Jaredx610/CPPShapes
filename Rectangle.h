#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle :public Polygon
{
public:
	//Needs a constructor that takes two lines: a length and width
	//This should also call the constructor of Polygon with the number
	//of edges, in this case 2.  Once the array is created, need to set
	//each value a line passed in.
	Rectangle(Line l,Line w):Polygon(2){
		edges[0] = l;
		edges[1] = w;
	}
	//Needs a function to override the getArea() funciton from Polygon
	double getArea(){
		return (edges[0].lineSize() * edges[1].lineSize());
	}
	//Needs a function to override the getPerimeter() funciton from Polygon
	double getPerimeter(){
		return ((2*edges[0].lineSize()) + (2*edges[1].lineSize()));
	}
};
#endif
