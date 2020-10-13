#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> wholeNumbers {20, 10, 4, -3, 25};

    /*
        ranged based for loop C++11 - it loops as long as there are elements within RANGE (scope) of container
    */

    for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    {
        auto nr = *it;
        cout << nr << endl;
    }

    for (auto nr : wholeNumbers)
        cout << nr << endl;




    return 0;
}

