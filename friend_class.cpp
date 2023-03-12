//friend class and function decleration 

#include <iostream>
using namespace std;

class y;
class x                     
{
    private:
        int data;
    
    public:
        void setdata(int value)
        {
                data=value;
        }

        friend void add(x, y);          //friend function. 
};

class y             //friend class decleration. 
{
    private:
        int num;

    public:
        void getdata(int pravin)
        {
            num=pravin;
        }
        
        friend void add(x, y);
};

void add(x o1, y o2)
{
    cout<<"The addition of data giving me class x&y:"<<o1.data+o2.num<<endl;
}

int main()
{
    x a;
    a.setdata(5);

    y u;
    u.getdata(6);

    add(a, u);
    return 0;

}
