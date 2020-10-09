#include <iostream>
#include "person_definition.h"

using namespace std;
/* classes */


void test (){
    //personalData person [6];
    PersonalData *pointer = new PersonalData[5];

    delete [] pointer;
}


int main()
{
    //test();

    PersonalData person1(10); // Instance of the class. Copy of the object. Classes are used to define/desribe objects
    PersonalData person2(20);
    PersonalData person3;
    person1.setName ("Sasha");
//    person1.setAge (1000);
//    person2.setAge (30);



    cout << person1.getName() << endl;
    cout << person1.getAge() << endl;
    cout << person2.getAge() << endl;
    //cout << person2.name << endl;
    return 0;
} // calling destructor
