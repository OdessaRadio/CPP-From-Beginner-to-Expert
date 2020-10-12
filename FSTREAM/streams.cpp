
#include <fstream>
#include <iostream>

using namespace std;



int main()
{
    fstream file;

    file.open("sample.txt", ios::out | ios::ate | ios::app);

     /*
        ios::in - INPUT - READING
        ios::out - OUTPUT - WRITE TO FILE. If there is no file then create
                                        If there is a file remove content
        ios::trunc - TRUNCATE - cutting everything
        ios::ate - At The End - sets the pointer to the end of file
        ios::app - Append - content added to thwe end of the file. It is not possible to remove content
        ios::binary - opens file as a binary file
    */

    if (file.is_open())
    {
        file << "sample text\n";
        file << "sample text\n";

    /*
        DEFAULT MODE (FLAGS)
        fstream -  ios::out | ios::in
        ifstream - ios::in
        ofstream - ios::out
    */


    }
    else
        cout << "The file can't be opened properly";



    return 0;
}
