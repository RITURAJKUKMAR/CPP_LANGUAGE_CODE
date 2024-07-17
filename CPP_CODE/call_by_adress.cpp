#include<iostream>
#include<conio.h>
using namespace std;
int RITU(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    cout<<"RITU{ A= "<<*p<<" B= "<<*q<<endl;
}
inline int RAJ(int *p)
{
    cout<<"{ RAJ A= "<<++*p<<"}"<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    cout<<"A= "<<a<<" B= "<<b<<endl;
    RITU(&a,&b);
    cout<<"A= "<<a<<" B= "<<b<<endl;
    cout<<"A= "<<a<<endl;
    RAJ(&a);
    cout<<"A= "<<a;
    getch();
}