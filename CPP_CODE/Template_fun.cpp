#include<iostream>
using namespace std;
template<class X>
X big(X a,X b)
{
    if(a<b)
        return b;
    else 
        return a;
}
template<class X,class Y>
Y Greater(X a,Y b)
{
    if(a<b)
        return b;
    else 
        return a;
}
int main()
{
    int x,y;
    double a,b;
    cout<<"Enter two number.\nN1 : ";
    cin>>x;
    cout<<"N2 : ";
    cin>>y;
    cout<<"Greater number = "<<big(x,y);
    cout<<"\nEnter two float number.\nN1 : ";
    cin>>a;
    cout<<"N2 : ";
    cin>>b;
    cout<<"Greater number = "<<big(a,b);
    cout<<"\nGreater number = "<<Greater(x,b);
    return 0;
}