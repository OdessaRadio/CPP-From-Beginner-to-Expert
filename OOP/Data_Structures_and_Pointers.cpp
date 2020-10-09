/*
#include <iostream>
using namespace std;

/*DATA STRUCTURES*/

/*

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

*/

#include <iostream>

using namespace std;

struct book
{
    string author;
    string title;
    int publicationYear;
};

void setBook(book&);
void showBook(book);

int main()
{
    book book1, book2, book3;

    setBook(book1);
    setBook(book2);
    setBook(book3);


    showBook(book1);
    showBook(book2);
    showBook(book3);
    return 0;
}

void setBook(book &bookToSet)
{
    cout << "Who is the author of the book: ";
    getline(cin, bookToSet.author);
    cout << "What is the title of the book: ";
    getline(cin, bookToSet.title);
    cout << "In what year was the book published: ";
    cin >> bookToSet.publicationYear;
    cin.ignore();
}
void showBook(book bookToShow)
{
    cout << endl << bookToShow.author <<  " " << bookToShow.title <<  " " << bookToShow.publicationYear << endl;
}
