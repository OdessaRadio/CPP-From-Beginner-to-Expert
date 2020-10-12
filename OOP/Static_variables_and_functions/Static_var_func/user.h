#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

class User
{
    private: // private added automatically, so we can not put this operator
        int ID;
        static int counter; // int counter will be shared within all instances of class

    public:
        User();//constructor declaration
        ~User();//destructor declaration

        int setID();
        int getID() {return ID;}

        static int getCounter(){return counter;} // static method is shared within all instances of class.
                                                // Method can be used before any object of class created
}; //



#endif // USER_H_INCLUDED
