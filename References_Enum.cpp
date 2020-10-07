#include <iostream>

/*reference variable*/

using namespace std;


int main ()
{
    string name2 = "Maria";
    string name = "Agnes";

    cout << "Value of variable: " << name << " address of the variable " << &name << endl;

    const string &nr_6 = name; //&nr_6 is a reference for the name
    //nr_6 = name2;

    cout << "Value of variable: " << nr_6 << " address of the variable " << &nr_6 << endl;

    name = "Scott";

    cout << "Value of variable: " << name << " address of the variable " << &name << endl;
    cout << "Value of variable: " << nr_6 << " address of the variable " << &nr_6 << endl;

    /*
    Rules:
     - Reference variable must be initialized when created
     - Ref. variable can't change associations / connections
     - Ref. variable must be the same type as associated variable
    */




    return 0;
}
