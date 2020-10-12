#ifndef COPY_H_INCLUDED
#define COPY_H_INCLUDED

class Test
{
    private:

    public:
        int x;
        int y;
        int *p;

        Test(const Test &);

        Test(int, int, int);
        ~Test();
};

#endif // COPY_H_INCLUDED
