# include <iostream>

using namespace std;

//ARRAYS
main()
{
    const int n = 100;

    int x[n];
    int a;
//    int testArray[4] = {1,2,3,4};
//
//    cout << &(testArray[0]) << endl;
//    cout << &(testArray[1]) << endl;
//    cout << &(testArray[2]) << endl

    int testArray[4]; //type array name [number of elements]
    testArray[0] = 10;
    testArray[1] = 50;
    testArray[2] = 256;
    testArray[3] = 128;

    cout << testArray[0] << " address is: " << &testArray[0] << endl;
    cout << testArray[1] << " address is: " << &testArray[1] << endl;
    cout << testArray[2] << " address is: " << &testArray[2] << endl;
    cout << testArray[3] << " address is: " << &testArray[3] << endl;

    cout << testArray[3] << " address is: " << testArray << endl;

    if (&testArray[0]==testArray)
        cout << "True";



}
