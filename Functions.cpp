#include <iostream>
typedef double dl;

using namespace std;
/* functions / methods */

/*
//Ex.1

int addition (int,int);

main()
{
    int aNumber, bNumber;

    cout << "Enter number a: ";
    cin >> aNumber;
    cout << "Enter number b: ";
    cin >> bNumber;

    cout << "Result: a + b = " << addition(aNumber, bNumber) << endl;
}

int addition (int x, int y)
{
    return x+y;
}

*/
/*
//Ex.2

int substraction (int,int);

main()
{
    int aNumber, bNumber;

    cout << "Enter number a: ";
    cin >> aNumber;
    cout << "Enter number b: ";
    cin >> bNumber;

    cout << "Result: a - b = " << substraction(aNumber, bNumber) << endl;
}

int substraction (int x, int y)
{
    return x-y;
}
*/
/*
//Ex.3

int multiplication (int,int);

main()
{
    int aNumber, bNumber;

    cout << "Enter number a: ";
    cin >> aNumber;
    cout << "Enter number b: ";
    cin >> bNumber;

    cout << "Result: a * b = " << multiplication(aNumber, bNumber) << endl;
}

int multiplication (int x, int y)
{
    return x*y;
}
*/
/*
//Ex.4

double division (double,double);

main()
{
    int aNumber, bNumber;

    cout << "Enter number a: ";
    cin >> aNumber;
    cout << "Enter number b: ";
    cin >> bNumber;

    cout << "Result: a / b = " << division(aNumber, bNumber) << endl;
}

double division (double x, double y)
{
    return x/y;
}
*/

/*
//Ex.6

dl addition (dl, dl);
dl substraction (dl, dl);
dl multiplication (dl, dl);
dl division (dl, dl);
dl exp (dl, dl);

main()
{
    dl aNumber, bNumber; //initial numbers
    dl res;
    char opSel;


    while (1)
    {
        cout << "Enter number a: ";
        cin >> aNumber;
        cout << "Enter number b: ";
        cin >> bNumber;
        cout << "Please, type the operator to execute: ";
        cin >> opSel;

        switch (opSel)
        {
            case '+' :
                res = addition(aNumber, bNumber);
                break;
            case '-' :
                res = substraction(aNumber, bNumber);
                break;
            case '*' :
                res = multiplication(aNumber, bNumber);
                break;
            case '/' :
                res = division(aNumber, bNumber);
                break;
            case '^':
                res = exp(aNumber, bNumber);
                break;
            default:
                cout << "You have entered wrong math. operator";
                res = 0;
                break;
        }

        cout << "Result: " << aNumber  << opSel << bNumber <<  " = " << res << endl;

        system ("pause");
        system ("cls");
    }


    return 0;
}

dl addition (dl x, dl y)
{
    return x+y;
}

dl substraction (dl x, dl y)
{
    return x-y;
}

dl multiplication (dl x, dl y)
{
    return x*y;
}

dl division (dl x, dl y)
{
    return x/y;
}

dl exp (dl x, dl y)
{
    double result = 1;

    for (int i = 1; i < y; i++)
        result *= x;
    return result;
}
*/



double minValue(double fNumbers[], int);
double maxValue(double fNumbers[], int);


main ()
{

    const int ARRAYLENGTH = 5;
    double fNumbers[5];

    for (int i = 0; i <= ARRAYLENGTH-1; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> fNumbers[i];
    }
    system ("cls");

    cout << "Inputted numbers are:" << endl;
    for (int i = 0; i<= ARRAYLENGTH-1; i++)
    {
        cout << fNumbers[i] << endl;
    }

    cout << "The max value of the array is: " << maxValue(fNumbers, ARRAYLENGTH) << endl;
    cout << "The min value of the array is: " << minValue(fNumbers, ARRAYLENGTH) << endl;
}

double minValue (double fNumbers[], int length)
{

    double minValue = fNumbers[0];

    for (int i = 1; i < length; i++)
    {
        if (minValue > fNumbers[i])
            minValue = fNumbers[i];
    }
    return minValue;
}

double maxValue (double fNumbers[], int lenght)
{
    double maxValue = fNumbers[0];

    for (int i = 1; i < lenght; i++)
    {
        if (maxValue < fNumbers[i])
            maxValue = fNumbers[i];
    }
    return maxValue;
}
