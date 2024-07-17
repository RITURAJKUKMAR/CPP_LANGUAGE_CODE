#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void value(int x,int y)
        { a=x;b=y;}
        complex add(complex c)
        {
            complex t;
            t.a=a+c.a;
            t.b=b+c.b;
            return t;
        }
        void output()
        { 
            cout<<"x= "<<a<<endl<<"y= "<<b;
        }
        friend void RITU(complex);
};
void RITU(complex c)
{
    cout<<endl<<endl<<endl;
    cout<<"(FRIEND)\nx= "<<c.a<<endl<<"y= "<<c.b;
}
int main()
{
    complex c1,c2;
    int x,y;
    cout<<"Enter two number."<<endl<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    c1.value(x,y);
    c1.output();
    cout<<endl<<"Enter two number."<<endl<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    c2.value(x,y);
    c2.output();
    c2=c2.add(c1);
    cout<<endl<<endl;
    c2.output();
    RITU(c2);
}