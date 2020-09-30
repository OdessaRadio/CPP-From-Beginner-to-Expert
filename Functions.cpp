#include <iostream>

using namespace std;
/* scope / range of variables */

int globalVariable;

main()
{
/*
    int localVariable;

    cout << "value of globalVariable is " << globalVariable << endl;
    cout << "value of localVariable is " << localVariable << endl;

    int a = 10;
    if (a==10)
    {
        int result = a * 10;
        cout << result << endl;
    }
*/
    int nr;
    int result = 0;
    int i = 0;
    for(; i <3; i++) // 3,2,3,
    {
        cout << "Enter " << (i+1) << " number" << endl;
        cin >> nr;
        result += nr;
    }
    cout << result << endl;
    cout << "We added " << i << " numbers" << endl;

}
