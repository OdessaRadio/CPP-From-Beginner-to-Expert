#include <iostream>

using namespace std;
/*
void multiplyBy (int *, int);

int main() {

    int a = 10;
    multiplyBy (&a, 5);
    cout << a << endl;

    return 0;
}


void multiplyBy (int *var, int amount)// *var = &a
{
*var *= amount;

}
*/
/*
int *multiplyBy (int *, int); //

int main() {

    int a = 10;
    int *b = multiplyBy (&a, 5); // *b = var. Function returns the address
   // *b = 100;
    cout << a << endl;
    cout << b << endl;



    return 0;
}


int *multiplyBy (int *var, int amount)// *var = &a
{
*var *= amount;

return var;

}
*/
int *multiplyBy (int *, int); //
void multiplyArrayBy (int *, int, int); // int * = &myArray[0]

main (){

    int myArray[10];
    int arraySize = sizeof(myArray)/sizeof(myArray[0]);
    cout << "arraySize is: " << arraySize << endl; // 10 * 4 bytes = 40 bytes


    for (int i = 0; i < arraySize; i ++){
        myArray[i] = i;
        //cout << "myArray [" << i << "] = " << myArray[i] << endl;
    }

    multiplyArrayBy (myArray, 5, arraySize);

    for (int i = 0; i < arraySize; i ++){
        cout << "myArray [" << i << "] = " <<myArray[i] << endl;
    }

    return 0;
}


int *multiplyBy (int *var, int amount)// *var = &a
{
*var *= amount;
return var;
}

void multiplyArrayBy (int *myArray, int amount, int arraySize){
    while (--arraySize)
        cout << arraySize << endl;
        myArray[arraySize] *= amount;

}
