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
        {   cout<<"\nA = "<<a<<endl<<"B = "<<b;}
        operator int()
        {   return a;   }
};
int main()
{
    complex c1;
    c1.SetData(4,5);
    c1.ShowData();
    int x=c1;
    cout<<"\nX = "<<x;
    return 0;
}