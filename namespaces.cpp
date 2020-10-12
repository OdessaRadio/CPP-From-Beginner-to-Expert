#include <iostream>

//using namespace std;

/* namespaces */

namespace mySpace
{

    class MyNewLine
    {
        private:
            std::string text;
        public:
            MyNewLine(std::string text = "\n\n\n") {this->text = text;}
            std::string toString()
            {
                return text;
            }
    };
    std::ostream & operator<<(std::ostream & out, MyNewLine & o)
    {
        return out << o.toString();
    }
    MyNewLine endl;
}

using namespace mySpace;
int main ()
{
    int a = 100;

    std::cout << "this is text : " << mySpace::endl;


    return 0;
}
