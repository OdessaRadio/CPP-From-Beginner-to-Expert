#include <iostream>
using namespace std;

/*DATA STRUCTURES*/

struct personalData
{
    string name;
    string surname;
    string telNumber;
    short age;
} a, b;

void test (personalData *);

int main (){

    a.age = 60;
    cout << a.age << endl;
    personalData person[5];

    person[0].name = "Sasha";
    person[1].name = "Kolya";

    person[0].surname = "Liashko";
    person[0].telNumber = "+39042346434";
    person[0].age = 32;

//    cout << person[0].name << endl;
//    cout << person[0].surname << endl;
//    cout << person[0].telNumber << endl;
//    cout << person[0].age << endl;

    // name of array is a pointer

    cout << (*person).name << endl;
    cout << (*(person+1)).name << endl;
    cout << (*&person[0]).name << endl;

    cout << person -> name << endl; // person pointer points to the name[0]
    cout << (person+1)-> name << endl;


    personalData *p = person;
    cout << (p+1) -> name << endl;

    test (p);
    cout << p[0].name << endl;


    return 0;
}


void test (personalData *person){

    person->name = "Agnes";
}
