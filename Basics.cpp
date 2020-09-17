
#include <iostream> //This console output is supposed to show the result of 2+2 equation

using namespace std;  //access to whole std namespace throughout your code.

main()
{
    int a = 4; // declaration, defining, initialization
    // because of initialization compiler will use 4 bytes for int data type
    char var = 'x';
    // & (ampersand). &name_of_variable
    cout << a << endl;
    cout << &a << endl; // sending number 4 into console output
    // endl - end of the line

    a = 10; // changing the value
    cout << a << endl;
    cout << &a << endl;


    /*
    Rules of naming variables:
    1. Variable can't have the same name;
    2. Can't start the name of variable with number;
    3. Can't use spaces in the name of variables;
    4. Variable name should be self descripted;
    5. Can't use special characters;
    6. Variables should be nouns.



    */
}
