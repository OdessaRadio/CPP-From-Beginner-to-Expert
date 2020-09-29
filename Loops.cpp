#include <iostream>

using namespace std;


main ()
{
/*
//Ex.1
    int startingNumber;
    cout << "Enter number: ";
    cin >> startingNumber;

    for (int i = 0; i < 100 ;i++)
        cout << ++startingNumber << endl;
*/
/*
//Ex.2
    char lowerCase = 'a';
    char upperCase = 'A';
    char numbers = '0';
    for (int i = 0; i <= ('Z'-'A'); i++)
    {
        cout << upperCase << " ";
        cout << lowerCase << " ";

        lowerCase++;
        upperCase++;
    }

    for (int i = 0; i <= ('9'-'0'); i++)
    {
        cout << numbers << " ";
        ++numbers;
    };
*/
/*
//Ex.3
    float initialNumber, result = 1;
    int power;

    cout << "Enter number: ";
    cin >> initialNumber;
    cout << "Enter power: ";
    cin >> power;

    for (int i = 0; i < power; i++)
    {
        result *= initialNumber;
        cout << result << endl;
    }
    cout << "The number " << initialNumber << " to the power of " << power << " is equal to " << result << endl;
*/
/*
//Ex.4
    int initialNumber, factorialResult = 1;

    cout << "Enter number: ";
    cin >> initialNumber;

    for(int i = 1; i <=initialNumber; i++)

    {
        factorialResult *= i;
        cout << i << "! = " << factorialResult << endl;
    }

    //cout << result << endl;
*/
/*
//Ex.5
    int asterixNumber;
    cout << "Enter number: ";
    cin >> asterixNumber;

    for (int i = 1; i <= asterixNumber; i++)
    {
        cout << "*";
        if (!(i%5))
            cout << endl;
    }
*/
//Ex.6
    int numberArray[5];


    for (int i = 0; i <5; i++)
    {
        cout << "Enter number " << i+1 << " ";
        cin >> numberArray[i];
    }
    system ("cls");

    for (int i = 0; i <5; i++)
    {
        if (numberArray[i]%2 == 0)
            cout << "The number " << numberArray[i] << " is even" << endl;
        else
            cout << "The number " << numberArray[i] << " is odd" << endl;
    }

}
