#ifndef FARM_H_INCLUDED
#define FARM_H_INCLUDED

#include <iostream>
using namespace std;

class Animal
{
    private:

    protected:
        string voice;

    public:
        Animal();
        virtual ~Animal(); // virtual destructor
        virtual string getVoice() = 0; // we made the class abstract
        /*
        virtual string getVoice() {return voice ;}
        // virtual - we give a command to a compiler to check child classes to use getVoice from proper class
        // because of virtual compiler know which function he should
        */
};

class Dog : public Animal
{
    private:
        string sign;
    public:
        Dog();
        ~Dog();
        string getVoice() {return voice+" "+sign;}
};

class Cat : public Animal
{
    private:
        string sign;
    public:
        Cat();
        ~Cat();
        string getVoice() {return voice+" "+sign;}
};

class Cow : public Animal
{
    private:
        string sign;
    public:
        Cow();
        ~Cow();
        string getVoice() {return voice+" "+sign;}
};

#endif // FARM_H_INCLUDED
