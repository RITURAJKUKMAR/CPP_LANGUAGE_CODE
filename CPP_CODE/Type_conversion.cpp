#include<iostream>
using namespace std;
class Dummy
{
    private:
        int m,n;
    public:
        void SetData(int x,int y)
        {   m=x;    n=y;    }
        void ShowData()
        {   cout<<"\nDUMMY :"<<"\nM = "<<m<<endl<<"N = "<<n; }
        int vom()
        {   return m;   }
        int von()
        {   return n;   }
};
class complex
{
    private:
        int a,b;
    public:
        void SetData(int x,int y)
        {   a=x;    b=y;    }
        void ShowData()
        {   cout<<"\nCOMPLEX No."<<"\nA = "<<a<<endl<<"B = "<<b<<"i";}
        complex() {}
        complex(Dummy d)
        {
            a=d.vom();
            b=d.von();
        }
};
int main()
{
    complex c1;
    Dummy d1;
    c1.SetData(4,5);
    d1.SetData(29,87);
    c1.ShowData();
    cout<<endl;
    d1.ShowData();
    c1=d1;
    cout<<endl;
    c1.ShowData();
    return 0;
}