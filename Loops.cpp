#include <iostream>

using namespace std;

//break and continue
main ()
{
    int currentValue;
    int add = 1; //addendum
    char choice;

    while(1)
    {
        system ("cls");
        cout << "The current sum is: " << currentValue << endl;
        cout << "Do you want to add " << add << " ?(Y/N)";
        cin >> choice;

        if ((choice == 'Y')||(choice == 'y'))
            {
            currentValue += add;
            add++;
            }
        else if ((choice == 'N')||(choice == 'n'))
            {
            add++;
            continue;
            }
        else
            break;

    }
    cout << "Good bye" << endl;

}
