#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position
{
    private:
        int x,y;

    public:
        Position(int ,int);
        ~Position();
        void getPosition() const; // "const" will work for house instance, because it is const
        void setPosition(int, int); // sePosition will not work for house instance, because it is not a "const"
        friend void setX(Position &, int); // declaration of the friend function

};

#endif // POSITION_H_INCLUDED
