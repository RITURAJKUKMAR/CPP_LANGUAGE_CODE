#include<iostream>
#include<conio.h>
using namespace std;
class RITU
{
    private:
        int a;
    public:
        RITU(int c)
        {   a=c;  cout<<"A = "<<a<<endl;  }
        ~RITU()
        {  cout<<"RITU"<<endl; }
};
class RAJ :public RITU
{
    private:
        int b;
    public:
        RAJ(int x,int y):RITU(x)
        {   b=y;    cout<<"B = "<<b<<endl;}
        ~RAJ()
        { cout<<"RAJ"<<endl; }
};
int main()
{
    RAJ k(3,9);
    cout<<"Press Enter"<<endl;
    cout<<"   !"<<endl;
    getch();
    return 0;
}