#include <iostream>

using namespace std;


main ()
{
     int pin, checkPin;
     int attempts = 5;

     cout << "Input your pin number for the first time: ";
     cin >> pin;

     system("cls");

     do
     {
        cout << "Input your pin: " << " " << attempts << " tries left ";
        cin >> checkPin;
        attempts--;
        system("cls");

     } while ((checkPin != pin)&&(attempts > 0));

     if (checkPin == pin)
        cout << "Correct pin, welcome !" << endl;
     else
        cout << "You have entered a wrong PIN code for 5 times !";

}
