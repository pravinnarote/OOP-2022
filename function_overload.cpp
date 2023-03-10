//function overloading program:

# include<iostream>
using namespace std;

int add(int a, int b)
{
    cout<<"Using two arguments:"<<endl;
    return (a+b);

};

int add(int a, int b, int c)
{
    cout<<"Using 3 arguments:"<<endl;
    return (a+b+c);
};

//volume of cylinder.
int volume(double r, int h)
{
    return (3.14 *r *r *h);
};
//volume of cube:
int volume(int a)
{
    return (a*a*a);
};
//volume of rectangle:
int volume(int h, int l, int b)
{
    return (h*l*b);
}


int main()
{
    cout<<"adding 2&4 is:"<<add(2,4)<<endl;
    cout<<"adding 2,4&5 is:"<<add(2,4,5)<<endl;
    cout<<"volume of cylender:"<<volume(4, 5)<<endl;
    cout<<"volume of cube:"<<volume(4)<<endl;
    cout<<"volume of rectangle:"<<volume(2, 3, 4);

    return 0;
}
