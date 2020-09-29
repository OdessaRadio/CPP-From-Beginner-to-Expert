#include <iostream>

using namespace std;

//break and continue
main ()
{
/*
    for (int i = 1; i <= 10; i++) //amount of rown
    {
        if (i==5)
            continue;

        for (int j = 1; j <= 10; j++) //amount of columns
        {
            if (j==5)
                continue;
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
*/
    for (int i = 1, j = 1; i <= 10; i++)
    {
        cout.width(4);
        cout << i * j;
        if (i==10)
        {
            j++;
            i = 0;
            cout << endl;
        }
        if (j == 10 + 1)
            break;


    }
}
