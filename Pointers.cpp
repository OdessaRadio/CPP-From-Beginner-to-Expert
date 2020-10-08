#include <iostream>

using namespace std;

//* Strings and a pointer on a char */
//Ex.1, Ex.2
/*
int main()
{
    string var = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < var.length(); i++)
        cout << var[i];

    return 0;
}
*/
//Ex.3

int main() {

int number;

cout << "How many characters would you like to input?\n";
cin >> number;

char * myList = new char [number];

for (int i = 0; i<number; i++){
    cout << "Enter " << i+1 << " number: ";
    cin >> myList[i];
}

for (int i = 0; i<number; i++){
    cout << *(myList+i) << endl;
    cout << myList << endl;
}

//string myString = myList;
//cout << myString;


delete [] myList;
return 0;
}
