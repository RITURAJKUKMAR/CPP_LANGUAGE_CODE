#include<iostream>
using namespace std;
class box
{
    private:
        int l,b,h;
    public:
        void setdata(int l,int b,int h)
        {    this->l=l; this->b=b; this->h=h;  }
        void showdata()
        {
            cout<<"\nL = "<<l<<"\nB = "<<b<<"\nH = "<<h;
        }
};
int main()
{
    box *b,b1,b2;
    b=&b1;
    int x,y,z;
    cout<<"Enter value of l , b and h"<<endl;
    cin>>x>>y>>z;
    b->setdata(x,y,z);
    b->showdata();
    cout<<"\nEnter value of l , b and h"<<endl;
    cin>>x>>y>>z;
    b2.setdata(x,y,z);
    b2.showdata();
    delete b;
    return 0;
}