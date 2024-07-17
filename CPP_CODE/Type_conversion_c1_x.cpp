#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void SetData(int x,int y)
        {   a=x;    b=y;    }
        void ShowData()
        {   cout<<"\nA = "<<a<<endl<<"B = "<<b;   }
        complex() {}
        complex(int x)
        {   a=x;    b=0;    }
};
int main()
{
    complex c1;
    c1.SetData(3,5);
    c1.ShowData();
    c1=8;
    c1.ShowData();
    return 0;
}