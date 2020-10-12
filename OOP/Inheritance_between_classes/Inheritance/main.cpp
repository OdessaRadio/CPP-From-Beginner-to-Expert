#include <iostream>
#include "point.h"

using namespace std;

/* INHERITANCE */

void operationOnPoints();

int main()
{

    operationOnPoints();

    return 0;
}

void operationOnPoints(){
    //Point p1;
    Point2D p2(10,67);
    p2.setY(50);
    //cout << p1.getX() << endl;
    cout << p2.getY() << endl;

    p2.setXY(200,300);
    p2.Point::setX(999); // if we have setX in Point2D but want to use setX from Point we use construction: p2.Point::setX
    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
}

