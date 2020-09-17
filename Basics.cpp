#include <iostream>

//using namespace std;

main()
{
//   //std::cin cin - console input
//    char a;
//    std::cin >> a; // console input
//
//    std::cout << "Variable a = " << a << "\n";
    std::string name, surname;
    std::cout << "Enter your name: ";
    std::cin >> name; // reading input from console
    std::cout << "Enter your surname: ";
    std::cin >> surname; // reading input from console

    std::cout << name << " " << surname << std::endl;

    system("pause");
}
