//Hotel order management code with price and Id of items:!!


#include<iostream>
using namespace std;

class shop
{
    private:
        int ItemId[100];
        int ItemPrice[100];
        int counter;

    public:
        void Initcounter(void){counter=0;}
        void setprice(void);
        void getprice(void);
};
void shop::setprice()
{
    for(int i=1;i<=5;i++)
    {
    cout<<"Enter the Id of Item:"<<counter+1<<endl;
    cin>>ItemId[counter];
    cout<<"Enter the Item price:"<<endl;
    cin>>ItemPrice[counter];
    counter++;
    }
}

void shop::getprice()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"----------******-------------"<<endl;
        cout<<"The Item Id is:"<<ItemId[i]<<endl<<"The Item Price is:"<<ItemPrice[i]<<"$"<<endl;
    }
}

int main()
{
    shop s;
    s.Initcounter();
    s.setprice();
    s.getprice();

    return 0;
}
