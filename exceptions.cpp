#include <iostream>
using namespace std;

/* Exceptions - handling exceptions */

class DivisionByZeroException
{
    public:
        void getErrorMessage () {cout << "Error. Do not divide by zero";}
};

double division(double a, double b) throw (DivisionByZeroException) // this is a mark for the developers
    {
    if (b==0)
        throw DivisionByZeroException();
    return a/b;
    }

int main() {

    double result;
    try
    {
       result = division (5,0);
       cout << "The result is: " << result << endl;
    }

    catch(DivisionByZeroException e)
    {
        e.getErrorMessage();
    }
    catch (...)
    {
        cout << " catch 2 " << endl;
    }


return 0;
}
