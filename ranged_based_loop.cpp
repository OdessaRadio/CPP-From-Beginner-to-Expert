#include <iostream>
#include <vector>

using namespace std;

class Book
{
     public:
     Book()
     {
         cout << "constructor is invoked" << endl;
     }

     Book(const Book &secondBook) { cout <<"some copy constructor instructions" << endl; }
     string getInfo()
     {
        return "Hey I'm book";

     }

};
int main()
{

    vector<Book> wholeNumbers {Book(), Book(), Book(), Book(), Book()};

    /*
        ranged based for loop C++11 - it loops as long as there are elements within RANGE (scope) of container
    */

 /*   for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++)
    {
        auto& nr = *it;
        nr *= 10;
        cout << nr << endl;
    }
*/
    for (auto& nr : wholeNumbers)
    {
        cout << nr.getInfo() << endl;
    }







    return 0;
}

