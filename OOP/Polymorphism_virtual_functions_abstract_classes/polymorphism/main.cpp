#include <iostream>
#include "farm.h"

using namespace std;

/* polymorphism, virtual functions, abstract classes */

void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);

int main()
{

    /*
    //Animal animal;
    Dog dog;
    Cat cat;
    Cow cow;

    //cout << animal.getVoice() << endl;
    cout << dog.getVoice() << endl;
    cout << cat.getVoice() << endl;
    cout << cow.getVoice() << endl;

    voiceOfAnimal(&cow); // we can use a reference and "virtual" word to use only one function for different instances

    Animal *p = &dog; // we can do it because Dog is a child class of Animal
    // by using pointer to a child class, we use methods from master class

    cout << p->getVoice() << endl;

    */

    Animal *dog = new Dog; // we need to create a virtual destructor in the parent class

    delete dog;

    return 0;
}

void voiceOfAnimal(Animal *p){
    cout << p->getVoice() << endl;
}

void voiceOfAnimal(Animal &p){
    cout << p.getVoice() << endl;
}
