#include <iostream>
using namespace std;
/*POINTERS are ordinary variables that store another address variable*/


int main()
{
    int  a[3];
    a[0] = 0;
    a[1] = 20;
    a[2] = 40;

    short int zm;
    int * const p = &a[0];

    int var = 12;

    cout << p << endl;
    cout << a << endl;
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;

    cout << "============" << endl;

    cout << *a << endl;
    cout << a+1 << endl; //+1 move by one data type definition
    cout << a+2 << endl;
    cout << a+10 << endl;

    cout << "============" << endl;

    cout << *a << endl;
    cout << *(a+1) << endl; //+1 move by one data type definition
    cout << *(a+2) << endl;
    cout << *(a+10) << endl;

    cout << "============" << endl;

    int *p_2 = a;

    cout << *p_2 << endl; // a[0] = 0
    cout << "p_2 = " << p_2 << endl;

    cout << ++*p_2 << endl; // ++a[0] = 1
    cout << "p_2 = " << p_2 << endl;

    cout << *++p_2 << endl; // *a[0+1] = 20
    cout << "p_2 = " << p_2 << endl;

    cout << *p_2++ << endl; //
    cout << "p_2 = " << p_2 << endl;

    cout << *p_2 << endl; // a[0] = 0
    cout << "p_2 = " << p_2 << endl;

    return 0;
}




