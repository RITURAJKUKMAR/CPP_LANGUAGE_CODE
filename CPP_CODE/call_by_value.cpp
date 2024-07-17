#include<iostream>
#include<conio.h>
using namespace std;
int RITU(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    cout<<"RITU{ A= "<<x<<" B= "<<y<<"}"<<endl;
}
int RAJ(int x)
{
    cout<<"{ RAJ A= "<<++x<<"}"<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers."<<endl;
    cin>>a>>b;
    cout<<"A= "<<a<<" B= "<<b<<endl;
    RITU(a,b);
    cout<<"A= "<<a<<" B= "<<b<<endl;
    RAJ(a);
    cout<<"A= "<<a;
    getch();
}