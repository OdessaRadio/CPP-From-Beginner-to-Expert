#include <iostream>

using namespace std;
/* functions / methods */

int globalVariable;

void welcome(); //declaration of the function
bool isNumber(string); // no need to declare the name in parameters, only type
void enterName();
double add(double a, double b) {return a + b;}

void changeValueTo10 (int x)
{
    //int x = a
    x = 10;
}

main()
{
    //welcome();
    //enterName();
    //cout << add(3,5) << endl;

    int a = 5;
    changeValueTo10(a);
    cout << a;

    return 0;
}

bool isNumber(string tmp)
{
    if (tmp[0]=='O')
        return false;

    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
            return false;
    }
    return true;
}

void welcome()
{
    cout << "Hello, welcome to our program" << endl;
}

void enterName()
{
    string tmp;

    cout << "Enter the number: " << endl;
    cin >> tmp;

    if (isNumber(tmp))
        cout << "Number is entered properly" << endl;
    else
        cout << "Number was not entered properly" << endl;
}
