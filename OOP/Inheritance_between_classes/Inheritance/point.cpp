#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int x)
{
    this->x = x;
    cout << "The constructor from the Point class has just been invoked" << endl;
}

Point::~Point()
{
    cout << "The destructor from the Point class has just been invoked" << endl;
}

void Point::setX (int x)
{
    this->x = x;
    cout << "I am from Point" << endl;
}

//

Point2D::Point2D (int x, int y) : Point(x) // involving constructor from Point
{
    // this->x = x; No need to make this initialization
    this->y = y;
    cout << "The constructor from the Point2D class has just been invoked" << endl;
}

Point2D::~Point2D ()
{
    cout << "The destructor from the Point2D class has just been invoked" << endl;
}

void Point2D::setY(int y)
{
    this->y = y;
}

void Point2D::setXY(int x,int y)
{
    setX(x);
    setY(y);
}

void Point2D::setX(int x)
{
    this->x = x;
    cout << "from Point2D" << endl;
}