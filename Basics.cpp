#include <iostream>

//using namespace std;

main()
{
    // Ex.1
    char a('A');   //character 1 byte -128 to 127
    int b(2000);    //integer 4 bytes -2147483648 to 2147483647
    short c(-32768);  //short integer 2 bytes -32768 to 3276
    float d = 27.6787651232323231312;  //floating point 4 bytes +/- 3.4e +/- 38 (~7 digits)
    double f = 27.6787651232323231312; //double floating point 8 bytes +/- 1.7e +/- 308 (~15 digits)
    // Ex.2
    std::cout << "variable a value is: " << a << "\n";
    std::cout << "variable b value is: " << b << "\n";
    std::cout << "variable c value is: " << c << "\n";
    std::cout << "variable d value is: " << d << "\n";
    std::cout << "variable f value is: " << f << "\n";
    // Ex. 3
    int room_Number;
    unsigned floorLevel; // unsigned char
    string firstName, lastName;
    bool mealsIncluded;

}
