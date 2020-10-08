#include <iostream>

using namespace std;

//* Strings and a pointer on a char */

int main()
{

    string text = "sample text";// the last symbol is \0
    /*
    for (int i = 0; i < text.length();i++){
        cout << text[i] << endl;
    }

    cout << "\n\n\n";

    char ch = text[0];
    cout << ch << endl;

    char characters[] = "1234"; // [] compiler will give the size automatically

    cout << characters[0] << endl;
    cout << *(characters) << endl;

    char *p = characters;

    cout << p[1] << endl;
    cout << *(p+1) << endl;
*/
    const char *text2 = text.c_str(); // c_str() is a method to convert string to char
    cout << text2 << endl;

    char array_1[] = "here is a text";
    string test = array_1;
    cout << array_1 << endl;

    const char * a = "this is a text 43243243"; // this is a const because created on compiling. We can't change *a
    cout << a[0] << endl;

    char b[] = "sdasdsda";
    cout << b << endl;

    b[0] = 'g';
    cout << b << endl;

    char * const dynamic_array = new char [50];
    dynamic_array [0] = 'f';
    cout << dynamic_array << endl;
    delete [] dynamic_array;


    string array_of_string[3];
    cout << array_of_string[0] << endl;
    cout << array_of_string[1] << endl;

    return 0;
}
