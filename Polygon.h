#ifndef POLYGON_H
#define POLYGON_H

#include "Line.h"

/*
Class used to create different types of polygons.
Keeps track of the edges but needs to be allocated
a number of them to account for many different types
of polygons
*/
class Polygon
{
public:
	//Constructor that takes the number of edges for the polygon
	//and creates a new dynamic array of edges equal to that
	//number
	Polygon(int numEdges)
	{
		edges = new Line[numEdges];
	}

	//Remove all dynamically-allocated memory
	~Polygon()
	{
		delete[] edges;
	}


	//Need to fix both of these functions so 
	//the children can correctly Override them...
	virtual double getArea()
	{
		return 0;
	}
	virtual double getPerimeter()
	{
		return 0;
	}
	/////////////////////////////////////////////

protected:
	Line *edges;
};

#endif