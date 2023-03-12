// using friend function.

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class complex
{
        int a;
        int b;

public:
        void setdata(int v1, int v2)
        {
                a = v1;
                b = v2;
        }
        void printno()
        {
                cout << "the complex no is:" << a << "+" << b << "i" << endl;
        }

        friend complex getdatabysum(complex o1, complex o2); // friend function.
};

complex getdatabysum(complex o1, complex o2)            // friend function declearation.
{ 
        complex o3;
        o3.setdata((o1.a + o2.a), (o1.b + o2.b));
        return o3;
}

int main()
{
        complex c1, c2, c3;
        c1.setdata(2, 4);
        c1.printno();

        c2.setdata(4, 5);
        c2.printno();

        c3 = getdatabysum(c1, c2);
        c3.printno();

        return 0;
}
