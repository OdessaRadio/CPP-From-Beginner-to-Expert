
#include <iostream>

using namespace std;

main()
{
    int a = 10, b = 0, c = 30; // allocating 4 bytes
    cout << "a : " << a << " Address is: " << &a <<endl;
    cout << "b : " << b << " Address is: " << &b <<endl;
    cout << "c : " << c << " Address is: " << &c <<endl;

    short int t1;       // allocating 2 bytes
    //short t1;         // the same as short int

    t1 = 5;
    cout << t1 << endl;

    float t2 = 5.12;    // 4 bytes of memory
    double t3 = 10.12;  // 8 bytes of memory. double float
    cout << t2 << endl;
    cout << t3 << endl;

    char t4;    // character
    t4 = 'a';
    cout << t4 << endl;

    string t5 = "Hello World!\n";
    cout << t5 << endl;

    string x = "part1";
    string y = "part2";
    string combineStrings = x+y;
    cout << combineStrings << endl;

    // boolean True or False
    bool t6 = true;
    cout << t6 << endl;

    unsigned short int t7 = 54000; // 2 bytes
    cout << t7 << endl;

    const string NAME_OF_GAME = "C++"; // const means we can't change it
    cout << NAME_OF_GAME << endl; // const variable names are in capital letters

    cout << "\n" << "Practicing the calculations" << "\n";
    cout << "5/2= " << 5/2 << "\n";
    cout << "5.0/2= " << 5.0/2 << "\n";



}
