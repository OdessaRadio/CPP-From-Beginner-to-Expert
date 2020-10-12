#ifndef PERSON_DEFINITION_H_INCLUDED
#define PERSON_DEFINITION_H_INCLUDED

#include <iostream>
using namespace std;

class PersonalData
{
    private: // private means it can be used only inside class
        int age;
        string name;
        int *p;

    public: //public means that attributes and methods are available outside
        // constructor is not returning anything
        PersonalData(); // constructor
        PersonalData(short); // constructor
        ~PersonalData() ; // destructor
        void setName (string);
        string getName () {return name;}

        /*These functions are set age*/
        void setAge (int);
        int getAge () {return age;}
};

#endif // PERSON_DEFINITION_H_INCLUDED
