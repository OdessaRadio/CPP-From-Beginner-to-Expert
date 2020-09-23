# include <iostream>

using namespace std;


main()
{
    int a = 20;
    int b = 20;
    // CONDITION ? so instruction will be executed if condition is true : if condition is not true
    string message = (a > b) ? "a > b" : "a <= b";
    cout << message << endl;

    cout << ((a>b) ? a : b) + 10 << endl;


}
