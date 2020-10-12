#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

class Integer
{
    private:
        int nr;

    public:
        Integer() {}; //default constructor
        Integer(int);
        operator int(); // specifying integer operator
        int operator += (Integer); // specifying operator

        int getNr() {return nr;}

};

#endif // INTEGER_H_INCLUDED
