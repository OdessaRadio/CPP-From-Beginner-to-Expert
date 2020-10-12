#include "farm.h"

Animal::Animal()
{
    voice = "default value";
}

Animal::~Animal()
{
    cout << "Animal class destructor" << endl;
}

//
Dog::Dog()
{
    sign = "D";
    voice = "hau hau hau";
}

Dog::~Dog()
{
    cout << "Dog class destructor" << endl;
}

//
Cat::Cat()
{
    sign = "CO";
    voice = "meow";
}

Cat::~Cat()
{
    cout << "Cat class destructor" << endl;
}

//
Cow::Cow()
{
    sign = "C";
    voice = "muuu";
}

Cow::~Cow()
{
    cout << "Cow class destructor" << endl;
}
