#include <iostream>


using namespace std;

//
int & swap (int &,int &); // function swap returns the reference

int main ()
{
    int a = 10;
    int b = 20;

    int &c = swap(a,b);

    //int &ref = a;

    int t;

    //t = a;
    //a = b;
    //b = t;

    c = 100;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}

int & swap (int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;

    //cout << "x: " << x << endl;
    //cout << "y: " << y << endl;

    return x;
}
