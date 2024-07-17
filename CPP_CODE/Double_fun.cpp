#include<iostream>
#include<conio.h>
#define PI 3.141
#define square(a) a*a
using namespace std;
float AREA(int r)
{
    return(square(r)*PI);
}
int AREA(int l,int b)
{
    return(l*b);
}
int main()
{
    int r,l,b;
    cout<<"Enter the value of radius."<<endl<<"R= ";
    cin>>r;
    cout<<"Area of circle. A= "<<AREA(r)<<endl;
    cout<<"Enter the value L and B\n L= ";
    cin>>l;
    cout<<"B= ";
    cin>>b;
    cout<<"Area of recangle. A= "<<AREA(l,b);
}