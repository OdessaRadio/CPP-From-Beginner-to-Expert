#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <iostream>
using namespace std;

template<typename T>
class Point
{
    protected: // we can access to x via set and get but it can be inherited by other classes
        T x;

    public:
        Point(T =0 ); // if nothing is set, default value is 0
        ~Point();
        T getX() {return x;}
        void setX(T);
};

template<typename T>
Point<T>::Point(T x)
{
    this->x = x;
    cout << "The constructor from the Point class has just been invoked" << endl;
}

template<typename T>
Point<T>::~Point()
{
    cout << "The destructor from the Point class has just been invoked" << endl;
}

template<typename T>
void Point<T>::setX (T x)
{
    this->x = x;
    cout << "I am from Point" << endl;
}




// derived class, child, subclass

template <typename T>
class Point2D : public Point <T> // inherit the public section of the class Point
{
    protected:
        T y;
    public:
        Point2D(T =0 , T =0); // if nothing is set, default value is 0
        ~Point2D();
        int getY() {return y;}
        void setY (T);
        void setX(T);
        void setXY(T,T);
        Point2D operator+(Point2D);

};

template <typename T>
Point2D<T>::Point2D (T x, T y) : Point<T>(x) // involving constructor from Point
{
    // this->x = x; No need to make this initialization
    this->y = y;
    cout << "The constructor from the Point2D class has just been invoked" << endl;
}

template <typename T>
Point2D<T>::~Point2D ()
{
    cout << "The destructor from the Point2D class has just been invoked" << endl;
}

template <typename T>
void Point2D<T>::setY(T y)
{
    this->y = y;
}

template <typename T>
void Point2D<T>::setXY(T x,T y)
{
    setX(x);
    setY(y);
}

template <typename T>
void Point2D<T>::setX(T x)
{
    this->x = x;
    cout << "from Point2D" << endl;
}

template <typename T>
Point2D<T> Point2D<T>::operator+(Point2D o){
    Point2D tmp;
    tmp.setX(this -> getX() + o.getX());
    tmp.setY(this -> getY() + o.getY());

    return tmp;

}



/*
class Point3D : Point2D
{


};
*/

/*
class Point2D : public Point

everything what is inside Point (excluding constructor and destructor)
will be in Point2D

private - can't be accessed
protected - will be still protected
public will be changed to protected

*/



#endif // POINT_H_INCLUDED
