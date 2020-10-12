#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

// parent/ super class
class Point
{
    protected: // we can access to x via set and get but it can be inherited by other classes
        int x;

    public:
        Point(int =0 ); // if nothing is set, default value is 0
        ~Point();
        void setX(int);
        int getX() {return x;}
};


// derived class, child, subclass
class Point2D : public Point // inherit the public section of the class Point
{
    protected:
        int y;
    public:
        Point2D(int =0 , int =0); // if nothing is set, default value is 0
        ~Point2D();
        int getY() {return y;}
        void setY (int);
        void setX(int);
        void setXY(int,int);


};

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
