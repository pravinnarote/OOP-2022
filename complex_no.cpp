//comlpex number representation of code.

#include<iostream>
using namespace std;
class complex{
    int real, imaginnary;

    public:
        void getdata()
        {
                cout<<"Real part of comlpex no is:"<<real<<endl;
                cout<<"Imaginary part of comple no is:"<<imaginnary<<endl;

        }

        void setdata(int a, int b)
        {
                real=a;
                imaginnary=b;
        }
};
int main()
{   
    //complex c;                            //first->simple pointer reprentaion.
    //complex *ptr= &c;
    complex *ptr = new complex;             //second->pointer.
    //c.setdata(20, 30);
    //c.getdata();
    //(*ptr).setdata(20, 30);
    //(*ptr).getdata();
    ptr->setdata(20, 30);                   //third->pointer.
    ptr->getdata();
    return 0;
}
