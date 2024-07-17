#include<iostream>
using namespace std;
class Dummy
{
    private:
        int a,b,*p;
    public:
        void Setdata(int x,int y,int z)
        {   a=x;    b=y;   *p=z;    }
        void showdata()
        {   cout<<"\nA = "<<a<<endl<<"B = "<<b<<endl<<"P = "<<p<<endl;  }
        Dummy()
        {   p=new int;  }
        Dummy(Dummy &d)
        {
            a=d.a;  b=d.b;
            p=new int;
            p=(d.p);
        }
        ~Dummy()
        {
            delete p;
        }
};
int main()
{
    Dummy d1;
    d1.Setdata(9,20,75);
    d1.showdata();
    Dummy d2;
    d2=d1;  //data copy
    d2.showdata();
    d1.Setdata(100,100,100);
    d2.showdata();
    return 0;
}
// something wrong
// not error