#include<iostream>
using namespace std;
class integer
{
    private:
        int a;
    public:
        void input(int x)
            { a=x;}
        void show()
            { cout<<"x= "<<a;}
        integer post()  //operetor ++();
        {
            integer i;
            i.a=a++;
            return i;
        }
};
int main()
{
    integer i1,i2;
    int x;
    cout<<"Enter a number"<<endl<<"x= ";
    cin>>x;
    i1.input(x);
    i1.show();
    i2=i1.post();   //++
    i1.show();
}