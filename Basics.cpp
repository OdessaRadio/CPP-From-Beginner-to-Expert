#include <iostream>

//using namespace std;

main()
{
    // Ex.1
    std::string string1, string2, string3;
    std::cout << "Enter string1: \n";
    std::cin >> string1;
    std::cout << "Enter string2: \n";
    std::cin >> string2;
    std::cout << "Enter string3: \n";
    std::cin >> string3;

    std::cout << "The combination of entered strings is:\n";
    std::cout << string1 << " " << string2 << " " << string3 << std::endl;

    system("pause");

    //Ex.2
    int number1, number2, number3;
    std::cout << "Enter integer 1: ";
    std::cin >> number1;
    std::cout << "Enter integer 2: ";
    std::cin >> number2;
    number3 = number1;
    number1=number2;
    number2=number3;
    std::cout << "Number1 = " << number1 << std::endl;
    std::cout << "Number2 = " << number2;

}
