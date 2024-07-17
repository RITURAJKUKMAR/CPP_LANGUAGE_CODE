#include<iostream>
#include<conio.h>
using namespace std;
class car
{
    private:
        int price,capacity;
        char engine[20],colour[20],fuel_type[20];
    public:
        void setprice()
        {
            cout<<"Enter car price"<<endl<<"RS. : ";
            cin>>price;
        }
        void setcapacity()
        {
            cout<<"Enter car capacity"<<endl<<"Capacity : ";
            cin>>capacity;
        }
        void setengine()
        {
            cout<<"Enter the car type of engine"<<endl<<"Engine : ";
            cin>>engine;
        }
        void setcolour()
        {
            cout<<"Enter car colour"<<endl<<"Colour : ";
            cin>>colour;
        }
        void setfuel_type()
        {
            cout<<"Enter the car type of fuel"<<endl<<"Fuel : ";
            cin>>fuel_type;
        }
        void getprice()
        {    cout<<"\nCar price RS.  = "<<price;    }
        void getcapacity()
        {    cout<<"\nCar capacity   = "<<capacity;  }
        void getengine()
        {    cout<<"\nCar engine type= "<<engine;  }
        void getcolour()
        {    cout<<"\nCar colour     = "<<colour;   }
        void getfuel_type()
        {    cout<<"\nCar fuel type  = "<<fuel_type;}
};
class sport_car :public car  //creat class two and join class 1st and class 2nd
{
    private:
        int alarm,nevigation;
    public:
    void sprice()
    {    setprice(); }
    void scapacity()
    {    setcapacity();}
    void sengine()
    {    setengine();}
    void scolour()
    {    setcolour();}
    void sfuel_type()
    {    setfuel_type();}
    void setalarm()
    {
        cout<<"Enter alarm time"<<endl<<"Time : ";
        cin>>alarm;
    }
    void setnevigation()
    {
        cout<<"Enter car nevigaton"<<endl<<"Nevigation : ";
        cin>>nevigation;
    }
    void gprice()
    {    getprice(); }
    void gcapacity()
    {    getcapacity();}
    void gengine()
    {    getengine();}
    void gcolour()
    {    getcolour();}
    void gfuel_type()
    {    getfuel_type();}
    void getalarm()
    {    cout<<"\nCar alarm time = "<<alarm;}
    void getnevigation()
    {    cout<<"\nCar nevigation = "<<nevigation; }
};
int main()
{
    car c,c2;
    sport_car c1;
    c1.sprice();
    c1.scapacity();
    c1.sengine();
    c1.scolour();
    c1.sfuel_type();
    c1.setalarm();
    c1.setnevigation();
    cout<<"\n[Full details of your sport car.]";
    c1.gprice();
    c1.gcapacity();
    c1.gengine();
    c1.gcolour();
    c1.gfuel_type();
    c1.getalarm();
    c1.getnevigation();
}