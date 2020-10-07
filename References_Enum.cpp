#include <iostream>

/* Enumeration */

using namespace std;

//      by dafault  0  1   2   3  4  5   6
enum dayOfWeek {M = 1, TU, W, TH, F, SA, SN}; //dayOfWeek is a new data type
// When assigning M = 1 we change the enumeration start index

string getDay(dayOfWeek);

int main ()
{
    int i;
//    dayOfWeek d = W;
//    cout << d << endl;
//    cout << dayOfWeek (TU) << endl;
//    cout << dayOfWeek (W) << endl;
    cout << "Enter number of day\n";
    cin >> i;
    cout << getDay(dayOfWeek(i)) << endl; //calling the week day by number


    return 0;
}

string getDay(dayOfWeek d)
{
    switch (d)
    {
    case M:
        return "Monday";
    case TU:
        return "Tuesday";
    case W:
        return "Wednesday";
    case TH:
        return "Thursday";
    case F:
        return "Friday";
    case SA:
        return "Saturday";
    case SN:
        return "Sunday";
    default:
        cout << "You typed something wrong" << endl;
    }
}
