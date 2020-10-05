#include <iostream>
typedef double dl;

using namespace std;

/* overloading functions */

/*
//Ex.1

void variableType (int);
void variableType (double);
void variableType (string);

main ()
{
int intNumber = 10;
double doubleNumber = 45.6;
string  stringNumber = "Test string";

variableType(intNumber);
variableType(doubleNumber);
variableType(stringNumber);
}

void variableType (int a)
{
   cout << a << " this variable was an integer" << endl;
}
void variableType (double a)
{
   cout << a << " this variable was an double" << endl;

}
void variableType (string a)
{
   cout << "\"" << a << "\"" << " this variable was an string" << endl;

}
*/

//Ex.2

double addition (double, double);
double addition (double, double, double);
double addition (double, double, double, double);
double addition (double, double, double, double, double);

main ()
{
    int numberOfNumbers;
    double numberArray[5] = {0};
    double result;

    do
    {
    cout << "Enter number of numbers to be added: ";
    cin >> numberOfNumbers;
    } while (numberOfNumbers < 2 || numberOfNumbers > 5);


    for (int i = 1; i <= numberOfNumbers; i++)
    {
        cout << "Enter number " << i << " :";
        cin >> numberArray[i-1];
    }

    switch (numberOfNumbers)
    {
        case 2:
            result = addition(numberArray[0],numberArray[1]);
            break;
        case 3:
            result = addition(numberArray[0], numberArray[1], numberArray[2]);
            break;
        case 4:
            result = addition(numberArray[0], numberArray[1], numberArray[2],numberArray[3]);
            break;
        case 5:
            result = addition(numberArray[0], numberArray[1], numberArray[2],numberArray[3],numberArray[4]);
            break;
    }

    cout << "Result is: " << result << endl;

    return 0;
}

double addition (double n1, double n2)
{
    return n1+n2;
}

double addition (double n1, double n2, double n3)
{
    return n1+n2+n3;
}

double addition (double n1, double n2, double n3, double n4)
{
    return n1+n2+n3+n4;
}

double addition (double n1, double n2, double n3, double n4 , double n5)
{
    return n1+n2+n3+n4+n5;
}
