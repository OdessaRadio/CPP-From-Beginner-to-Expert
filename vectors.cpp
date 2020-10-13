#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> wholeNumbers {20,25,-4,350}; // int is a type of objects that would be stored inside vector
    vector<int>::iterator it = wholeNumbers.begin(); // empty iterator created. Iterator is pointing to first element

    /*
    while(it != wholeNumbers.end())
    {
        cout << *it << endl;
        it++;
    }
    */
    for (vector<int>::iterator it = wholeNumbers.begin(); it != wholeNumbers.end(); it++){
            cout << *it << endl;
    }
    return 0;
}

