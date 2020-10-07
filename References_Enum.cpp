
#include <iostream>
using namespace std;


int & swap(int &, int &); // swap function returns reference value


int main()

{
    int a = 10;
    int b = 20;

    int &c = swap (a, b); //&c is a reference to the same address where a is. So a changes


    c = 40; // you want to give c a value


    cout << "a is equal : " << a << endl;
    cout << "b is equal : " << b << endl;
    cout << "c is equal : " << c << endl;

    system("pause");
    return 0;

}

int &swap(int &x, int &y)
{
  int t = x; //t = 10
  x = y; //x = 20
  y = t; //y = 10

  return x; // you return the first value

}
