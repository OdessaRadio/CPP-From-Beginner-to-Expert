#include <iostream>
#include "position.h"
using namespace std;

Position::Position(int x,int y)
{
    this -> x = x;
    this -> y = y;
}

Position::~Position()
{

}


void Position::getPosition() const // need to add "const" in the declaration to mark for each instances method will work
{
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

void Position::setPosition(int x, int y)
{
    this -> x = x;
    this -> y = y;
}
