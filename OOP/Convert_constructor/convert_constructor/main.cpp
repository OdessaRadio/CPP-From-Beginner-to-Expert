#include <iostream>
#include "integer.h"

using namespace std;

/* COBVERT CONSTRUCTOR - overloading operators*/

int main()
{

    Integer a(50);
    //cout << a.getNr() << endl;

    int b = a; //see integer operator

    a = 100;
    cout << a.getNr() << endl;
    cout << b << endl;

    cout << a+b << endl;

    a += b;// a = a + b
    cout << a.getNr() << endl;

    return 0;
}
