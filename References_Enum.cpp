#include <iostream>

using namespace std;

/*
//Ex.1

void setValue(int &);

int main()

{
    int a;

    setValue(a);

    cout << a << endl;

}


void setValue (int &x)
{

    cout << "Enter the value: \n";
    cin >> x;

}

*/
//Ex.2

void checkIfTheSame(int&, int&);

int main ()
{

    int a = 4;
    int b = 3;
    int c = a;
    int &d = a; //&d is a reference to a

    checkIfTheSame(a, b);
    checkIfTheSame(a, c);
    checkIfTheSame(a, d);

    return 0;
}

void checkIfTheSame(int &firstVariable, int &secondVariable)
{
    if (firstVariable == secondVariable && &firstVariable == &secondVariable)
    {
        cout << "The variables are completely the same !";
    }
    else if (firstVariable == secondVariable && &firstVariable != &secondVariable)
    {
		cout << firstVariable << " " << &firstVariable << endl;
        cout << secondVariable << " " << &secondVariable << endl;
        cout << "The variables have got same values but they are different variables !" << endl;
    }
    else
    {
        cout << firstVariable << " " << &firstVariable << endl;
        cout << secondVariable << " " << &secondVariable << endl;
        cout << "The variables are different !" << endl;
    }
}

