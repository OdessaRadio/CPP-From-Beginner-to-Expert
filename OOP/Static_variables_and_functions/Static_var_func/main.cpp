#include <iostream>
#include "user.h"

using namespace std;

/* static variables and static methods*/

// "static" means that attribute or method will be shared with all class instances,
// with all object type instances

int main()
{

    User a;
    User b[10];

    cout << a.getID() << endl;
    cout << b[6].getID() << endl;
    cout << User::getCounter() << endl;

    return 0;
}


