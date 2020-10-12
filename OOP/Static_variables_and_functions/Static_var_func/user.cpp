#include <iostream>
#include "user.h"

using namespace std;

int User::counter = 0; //initialization of static variable

User::User()
{
    counter++;
    ID = counter;

};

User::~User()
{


};
