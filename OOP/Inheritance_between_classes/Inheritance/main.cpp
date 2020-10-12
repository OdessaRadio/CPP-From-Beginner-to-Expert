#include <iostream>
#include "point.h"

using namespace std;

/* class templates */

void operationOnPoints();


template<typename T, typename T2>
T add(T var1, T2 var2)
{
    return var1 + var2;
}
/*
template<>
Point2D add(Point2D var1, Point2D var2){
    Point2D tmp;
    tmp.setX(var1.getX() + var2.getX());
    tmp.setY(var1.getY() + var2.getY());
    return tmp;
}
*/
typedef Point<int> PointInt;

int main()
{
    //cout << add<double, double>(2, 5.12) << endl;
    operationOnPoints();

    //cout << static_cast<int>(6.5) << endl; //static_cast operator performs an explicit type conversion

    return 0;
}


void operationOnPoints(){
    //Point2D<double> b(10.5, 6);
    //cout << b.getX() << endl;

    Point<char> b(49);
    cout << b.getX() << endl;

}

