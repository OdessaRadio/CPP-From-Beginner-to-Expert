#include "copy.h"

Test::Test(int x, int y, int value ) //constructor
{
    this -> x = x;
    this -> y = y;
    this -> p = new int(50);
}

Test::~Test() //destructor
{
    delete p;
}

Test::Test(const Test & obj)
{
    this -> p = new int (*(obj.p));
}
