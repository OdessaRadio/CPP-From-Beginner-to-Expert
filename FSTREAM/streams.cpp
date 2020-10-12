#include <fstream>
#include <iostream>

using namespace std;



int main()
{

    /*
        bad() - badbit
        clear() - clear the state
        fail() - situation when we try to assign the intiger for the wrong type + bad bit
        good() - if everything is ok
        rdstate() - reading the state file
        eof() - end of file bit. Returns true if the file opened to read reached the end of file
    */

    fstream file;

    file.open("sample.txt", ios::in);
    if (file.is_open())
    {
        string buffer;

        do
        {
            file >> buffer;
            cout << buffer;
        } while (!file.eof());

        cout << endl;


        if( (file.rdstate() ^ ifstream::eofbit) == 0 )
        {
            cout << "error\n";
            file.clear();
        }

        cout << file.rdstate() << endl;
    }
    else
        cout << "The file can't be opened properly";



    return 0;
}
