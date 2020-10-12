#include <iostream>
#include "position.h"

using namespace std;

int main()
{
    Position dog(10, 50);
    dog.getPosition();
    dog.setPosition(20,30);
    dog.getPosition();

    cout << endl;

    const Position house(500,600); // "const" means that we can use methods only with const in class declaration
    house.getPosition();
    //house.setPosition(999,999);
    //house.getPosition();

    return 0;
}
