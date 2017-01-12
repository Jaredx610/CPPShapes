#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Polygon.h"
#include <math.h>
class RightTriangle :public Polygon
{
public:
	RightTriangle(Line b,Line hei,Line hyp):Polygon(3){
		edges[0] = b; //edges[0] is the base (b)
		edges[1] = hei; //edges[1] is the height (hei)
		edges[2] = hyp; //Add hypothenuse to edges
	}
	//Needs a function to override the getArea() function from Polygon
	double getArea(){
		return (edges[0].lineSize()*edges[1].lineSize())/2; //Return (base*height)/2
	}
	//Needs a function to override the getPerimeter() funciton from Polygon
	double getPerimeter(){
		return edges[0].lineSize()+edges[1].lineSize()+ pow((pow(edges[0].lineSize(),2.0)+pow(edges[1].lineSize(),2.0)),0.5);
		//return base + height + sqrt(base squared + height squared)
	}
};
#endif
