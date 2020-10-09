#include <iostream>
#include <string.h>

using namespace std;

void showhelp();

int main(int argc, char *argv[]) //argc - how many parameters are on the command stream
{
    cout << argc << endl;
    for (int i =0; i < argc; i++){
        if ((strcmp(argv[i], "-h") == 0)&& i == 1){ // checking for -h string and position 1 in the stream
            showhelp();
        }
        cout << argv[i] << endl;
    }
/*
    char a[] = {'a','b','c','d','\0'};
    char *b = "this is a test";
    char *c[] = {"lal", "test", "something else"};

    cout << c[2] << endl;

    char x[] = "b"; // name of array is a pointer
    char y[] = "a";
    cout << (x == y) << endl;

    cout << (strcmp(x,y)) << endl; //0 - variables are the same; 1 - first string is greater; 2 - first string is lower


*/
    return 0;
}

void showhelp(){
    cout << "This is a function called by -h key" << endl;
}
