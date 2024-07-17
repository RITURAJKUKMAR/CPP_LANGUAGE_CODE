#include<iostream>
using namespace std;
class COMPLEX
{
    int a,b;
    public:
        void set(int,int);
        void PRINT()
        { cout<<"\na= "<<a<<",b= "<<b;}
        COMPLEX add(COMPLEX c)
        {
            COMPLEX TEMP;
            TEMP.a=a+c.a;
            TEMP.b=b+c.b;
            return (TEMP);
        }
};
void COMPLEX:: set(int x,int y)
{a=x,b=y;}
int main()
{
    int x,y;
    COMPLEX c1,c2,c3;
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    c1.set(x,y);
    cout<<"Enter two number"<<endl;
    cin>>x>>y;
    c2.set(x,y);
    c3=c1.add(c2);
    c3.PRINT();
}