#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void value(int x,int y)
        { a=x;b=y;}
        void print()
        { cout<<"A= "<<a<<" "<<"B= "<<b;}
        complex operator +(complex c)
        {
            complex t;
            t.a=a+c.a;
            t.b=b+c.b;
            return t;
        }
};
int main()
{
    complex c1,c2,c3;
    int x,y;
    cout<<"Enter two number for 1st complex number\n";
    cin>>x>>y;
    c1.value(x,y);
    cout<<"Enter two number for 2nd complex number\n";
    cin>>x>>y;
    c2.value(x,y);
    c3=c1 + c2;
    c3.print();
    return 0;
}