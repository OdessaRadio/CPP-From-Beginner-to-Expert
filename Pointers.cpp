#include <iostream>

using namespace std;
/*
// Ex.1
int main ()
{
    int statical;

    int *statically = &statical; // *statically - pointer to statical
    int *dynamically = new int; // *dynamically - pointer to dynamically allocated memory 4 bytes

    *statically = 10;
    *dynamically = 15;

    cout << "The value of the statically allocated variable: " << *statically << ", and the address: " << statically << endl;
    cout << "The value of the dynamically allocated variable: " << *dynamically << ", and the address: " << dynamically << endl;

    delete dynamically;

    return 0;
}
*/
//Ex.2
int main ()
{

    int arraySize;

    cout << "Input the size of the dynamic array you want to create: ";
    cin >> arraySize;

    int *dynamicArray = new int[arraySize];


    for (int i = 0; i < arraySize; i++)
    {
        cout << "Input " << i+1 << " number: ";
        cin >> *(dynamicArray+i);
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Number " << i+1 << ": " << *(dynamicArray+i) << endl;
    }

    delete []dynamicArray;

return 0;
}


