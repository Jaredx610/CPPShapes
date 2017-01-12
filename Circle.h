#ifndef CIRCLE_H
#define CIRCLE_H

#include "Polygon.h"


class Circle :public Polygon
{
public:
	//Polygon p;
	//Needs a constructor that takes two lines: a length and width
	//This should also call the constructor of Polygon with the number
	//of edges, in this case 2.  Once the array is created, need to set
	//each value a line passed in.
	Circle(Line l):Polygon(1){
		edges[0] = l;
	}
	
	//Needs a function to override the getArea() funciton from Polygon
	double getArea(){
		return 0.25*3.14*((edges[0].lineSize()*edges[0].lineSize()));
	}
	//Needs a function to override the getPerimeter() funciton from Polygon
	double getPerimeter(){
		return 2 * 3.14 * (edges[0].lineSize()/2);
	}
};
#endif
