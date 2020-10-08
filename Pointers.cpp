#include <iostream>
using namespace std;
/*POINTERS are ordinary variables that store another address variable*/


int main ()
{
    int var = 5;
    int a = 20;
    int var2 = 100;

    cout << "var: " << var << endl;

    int * const p = &var;; //pointer. * is used to indicate to compiler that *p is a pointer
                            // const means that we can't change the address in the pointer
    //cout << p << endl;

    //to get value by address

    cout << "p = " << p << endl; // returning the address of the var variable
    cout << "&p = " << &p << endl; //returning the address of the pointer variable
    cout << "*p = " << *p << endl; //returning the value of variable which addressed is stored in the pointer variable

    *p = 20; // changing the variable var by address
    cout << "var: " << var << endl;

    //p = &a; // changing the pointer address
    //cout << "*p = " << *p << endl; //returning the value of variable which addressed is stored in the pointer variable


    cout << "=========================\n";
    // var2 = 100, a = 20
    int * const p_const = &a; //can't change the address in the pointer but you can change the variable by address
    const int * p_2 = &a; //pointer can't change the value of the variable which address is stored in pointer but can change the address

    cout << "a = " << a << endl;
    cout << "p_const = " << p_const << endl;
    cout << "p_2 = " << p_2 << endl;

    *p_const = var2;

    cout << "a = " << a << endl;
    cout << "p_const = " << p_const << endl;
    cout << "p_2 = " << p_2 << endl;
    cout << "*p_const = " << *p_const << endl;
    cout << "*p_2 = " << *p_2 << endl;


    const int * const point_1 = &a; // this is the pointer that can't change the variable and the address can't be changed


    cout << "============" << endl;

    int ordinary_var = 10;
    int * ordinary_p = &ordinary_var;

    cout << "ordinary_var = " << ordinary_var << endl;
    cout << "ordinary_p = " << ordinary_p << endl;
    cout << "*ordinary_p = " << *ordinary_p << endl;
    cout << "&ordinary_p = " << &ordinary_p << endl;


    int ** pointer_pointing_to_address_of_pointer = &ordinary_p;
    cout << "pointer_pointing_to_address_of_pointer" << pointer_pointing_to_address_of_pointer << endl;



    return 0;
}
