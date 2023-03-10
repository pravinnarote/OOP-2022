//Binary number display and convertion between no. "0 to 1"!!!

#include<iostream>
#include<string>
using namespace std;

class Binary
{
    private:
        string s;

    public:
        void read(void);
        void write(void);
        void ons_complementary(void);
        void display(void);
};

void Binary::read(void)
{
    cout<<"Enter the binary number:"<<endl;
    cin>>s;
}

void Binary::write(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"This is not Binary no!!!"<<endl;
            exit(0);
        }
        
    }

}
void Binary::ons_complementary()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}

void Binary::display()
{
    cout<<"Display your binary no!!:"<<endl;
    for (int i=0;i<s.length();i++)
    {
       cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    Binary b;
    b.read();
    b.write();
    b.ons_complementary();
    b.display();

    return 0;
}


