//using parameterise constructer and friend function, find out the distance between two points.


#include<iostream>
#include<math.h>
using namespace std;

class point
{
    int x, y;

    public:
        point(int x, int y)
        {
            this->x=x;
            this->y=y;

        }

        void Pointdata()
        {
            cout<<"The point is:"<<"("<<x<<","<<y<<")"<<endl;
        }
        friend double setdata(point p, point p1);
};

double setdata(point p, point p1)
{
    int dx=p1.x-p.x;
    int dy=p1.y-p.y;
    return sqrt(dx*dx + dy*dy);

};

int main()
{
    point p(2, 6), p1(2, 4);
    p.Pointdata();
    p1.Pointdata();
    int dist=setdata(p, p1);
    cout<<"The distance is:"<<dist<<endl;

    return 0;
}

//--------------------****************************----------------------------------.
//defoul constructer.


/*#include<iostream>
using namespace std;

//creating a constructor.
//constructer is member function with same name as of class.
//contructer atomatically call(invoke) whenever an object is created.

class complex
{
    private:
        int a, b;

    public:
        //complex(void);                  //defoult constructor.
        complex(int , int);               // parametarise constructer.

        void setdata(void)
        {
            cout<<"The complex No is:"<<a<<"+"<<b<<"i"<<endl;
        }
};

/*complex::complex(void)            //decleration of defoult constructor
{
    a=20;
    b=30;
};
complex::complex(int x, int y)      //decleratoin of parameterise constructer
{
    a=x;
    b=y;
};


int main()
{
    //complex c1, c2, c3;
    complex c1(20,30), c2(30, 40), c3(40, 50);
    
    c1.setdata();
    c2.setdata();
    c3.setdata();
    

    return 0;
}*/
