#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void SetData(int x,int y)
        {   a=x, b=y;   }
        void ShowData()
        {   cout<<"\nA = "<<a<<endl<<"B = "<<b; }
};
class Dummy
{
    private:
        int m,n;
    public:
        void SetData(int x,int y)
        {   m=x;    n=y;    }
        void ShowData()
        {   cout<<"\nM = "<<m<<endl<<"N = "<<n; }
        operator complex()
        {
            Dummy t;
            return Dummy(t);
        }
};
int main()
{
    complex c1;
    Dummy d1;
    c1.SetData(3,9);
    d1.SetData(45,55);
    c1.ShowData();
    d1.ShowData();
    c1=d1;
    c1.ShowData();
    return 0;
}