#include<iostream>
#include<conio.h>
#include<math.h>
#define square(a) a*a
using namespace std;
int main()
{
    int a,b,c,x,x1,x2,D;
    cout<<"Enter the cofficiant values."<<endl<<"A= ";
    cin>>a;
    cout<<"B= ";
    cin>>b;
    cout<<"C= ";
    cin>>c;
    D=square(b)-4*a*c;
    if(D<0)
        cout<<"Roots are imegenary.";
    else if(D==0)
    {
        x=(-b)/2*a;
        cout<<"Roots are real and equal."<<endl<<"X= "<<x;
    }
    else if(D>0)
    {
        x1=((-b)-sqrt(D))/2*a;
        x2=((-b)+sqrt(D))/2*a;
        cout<<"Roots are real and different."<<endl<<"X1= "<<x1<<endl<<"X2= "<<x2;
    }
    getch();
}