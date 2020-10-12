#include "person_definition.h"

#include <iostream>
using namespace std;

void PersonalData::setAge (int age) {  // :: - scope operator
    cout << age << endl;
    if (age < 0)
        this -> age = 0; // "this" is address to instance of class that we are working with right now
    else
        this -> age = age;
}

void PersonalData::setName (string name) {
    this -> name = name;
}

// constructor
PersonalData::PersonalData() {
    static int i = 0; // "static" means that variable will not be changed for every object of the class
    i++;
    cout << "This constructor has been just invoked " << i << endl;
    age = 10; // if not specified by default
    name = "Oleksii"; // Set name by default if person . name is not specified
    p = new int [5]; // dynamically reserved memory
}

PersonalData::PersonalData(short age) {
    cout << "this is a diff. constructor" << endl;
    this -> age = age;
}

// destructor
PersonalData::~PersonalData() {
    static int j = 0; // "static" means that variable will not be changed for every object of the class
    j++;
    cout << "This destructor has been just invoked " << j << endl;
    delete [] p; // release the memory
}

