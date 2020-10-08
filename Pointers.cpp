#include <iostream>
using namespace std;
/*Dynamic allocation of memory*/


int main()
{
    /*
    int array[100];
    int * p_1 = &array[0];
    array[0] = 99;
    array[100] = 88;
    cout << *p_1 << endl;
    cout << *(p_1 + 100) << endl;
    */
/*
    int amount;

    cout << "How many numbers would you like to store in the memory? " << endl;
    cin >> amount;

    int *p = new (nothrow) int[amount]; // pointer to the first element of array

    if (p!=NULL){

    cout << p << endl;

        for(int i = 0; i < amount-1; i ++){
            cout << p[i] << endl;
        }
    }
    else
        cout << "Too many memory"<< endl;

    int y = 0;
    for(int i = 0; i < amount; i ++){
        y = i;
        cout << "i = " << i << " y = " << y << endl;
        cout << "Enter the " << (y+1) << " number :";
        cin >> p[i];
    }

    for(int i = 0; i < amount; i ++){
        cout << "p[" << i << "] = " << p[i] << endl;
    }

    delete p;
*/


//    cout << new int << endl; // new int - is an address
//    cout << *(new int) << endl;

/*
    int var = 250;


    {
    int *p = new int;

    *p = 50;

    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;

    delete p; // delete - releasing the pointer. Deleting variable address from the pointer
    p = NULL;

    p = &var;

    *p = 300;

    if (p!=NULL)
        {
            *p = 100;
            cout << *p << endl;
        }

    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
    }


    //array[0] = 500;

    cout << "var" << endl;
    cout << var << endl;
*/
    int *p = new int; // address reservation
    cout << p << endl;
    delete p;

    p = new int; // address reservation
    cout << p << endl;
    delete p;

    return 0;
}




