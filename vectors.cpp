#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> wholeNumbers {20,25,-4,350}; // int is a type of objects that would be stored inside vector

    vector<int>::iterator it = wholeNumbers.begin(); // empty iterator created. Iterator is pointing to first element

    cout << *it << endl;
    cout << *(it+1) << endl;




    // ITERATOR - pointer to the vector element

    /*
    wholeNumbers.push_back(1); // pushes back the value that we are gonna send
    wholeNumbers.push_back(350);
    wholeNumbers.push_back(45);
    wholeNumbers.push_back(-8);
    wholeNumbers.push_back(0);

    cout << wholeNumbers.at(0) << endl;

    wholeNumbers[2] = 100;
    cout << wholeNumbers.at(2) << endl;

    cout << "Size: " <<wholeNumbers.size() << endl;;
    cout << "Capacity: " << wholeNumbers.capacity() << endl;
    */





    return 0;
}
