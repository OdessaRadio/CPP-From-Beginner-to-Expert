#include <iostream>
typedef double dl;

using namespace std;
/* overloading functions */
int power (int, int);
double power (double ,int);

main ()
{
    cout << power(2.7,4) << endl;
    return 0;
}

int power (int b, int e)
{
    int tmp = b;
    while (e-- >1)
    {
        b *= tmp;
    }
    return b;
}

double power (double b, int e)
{
    int tmp = b;
    while (e-- >1)
    {
        b *= tmp;
    }
    return b;
}
