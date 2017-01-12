#ifndef LINE_H
#define LINE_H

#include <math.h>

/*
A class that is used to represent a point in 2D space.
This point consist of a single x and single y coordinate
*/
class Point
{
public:
	//Consturctor to set default values to the coordinates
	Point()
	{
		x = 0;
		y = 0;
	}
	friend class Line;
private:
	//Compute the distance between two points.
	double distance(const Point p)
	{
		return sqrt(((this->x - p.x) * (this->x - p.x)) + ((this->y - p.y) * (this->y - p.y)));
	}
	//X and Y coordinates
	double x, y;
};

/*
Class that creates a line between 2 points.
You must tell this class the coordinates of the 
2 points to create the line between.  It then can 
hold this line and compute the size.
*/
class Line
{
public:
	//Default constructor
	Line()
	{

	}
	//Overloaded consturctor to take the x and y coordinates of 
	//2 points.  These are set as the coordinates for both points
	Line(double x1, double y1, double x2, double y2)
	{
		p1.x = x1;
		p1.y = y1;
		p2.x = x2;
		p2.y = y2;
	}

	//Compute the size of the line
	double lineSize()
	{
		return p1.distance(p2);
	}
private:
	//The two points to connect the line between.
	Point p1, p2;
};

#endif