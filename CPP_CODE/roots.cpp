//Find quadratic roots real and imaginary and (also complex roots).
//Find the value of quadratic equation.
#include<iostream>
#include<conio.h>
#define square(a) a*a
using namespace std;
int root(int x)
{
    int i,r=1;
    if(x==0)
        return 0;
    else
    {
        for(i=2;2<=x;i++)
        {
            while(1)
            {
                if(x%i==0)
                {
                    x=x/i;
                    if(x%i==0)
                    {
                        x=x/i;
                        r=r*i;
                    }
                }
                else
                    break;
            }
        }
        return r;
    }
}
int main()
{
    int a,b,c,x,x1,x2,y,z,r,D,b1,y1,f;
    cout<<"Enter value of a ,b & c"<<endl<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    y=square(b)-(4*a*c);
    if(y>=0)
    {
        D=root(y);
        z=square(D);
        if(z==y)
        {
            if(y==0)
            {
                x=-b/(2*a);
                cout<<"Roots are real and equal."<<endl<<"x= "<<x;
            }
            else if(y>0)
            {
                x1=(-b+root(y))/(2*a);
                x2=(-b-root(y))/(2*a);
                cout<<"Roots are real and differents."<<endl<<"x1= "<<x1<<", x2= "<<x2;
            }
        }
        else
        {
            D=root(y);
            z=square(D);
            r=y/z;
            if(b/(2*a)&&D/(2*a))
            {
                b1=-b/(2*a); y1=D/(2*a);
                cout<<"Roots are imaginary."<<endl<<"X1= "<<b1<<"+"<<y1<<" _/"<<r<<endl<<"X2= "<<b1<<"-"<<y1<<" _/"<<r;
            }
            else
                cout<<"Roots are imaginary."<<endl<<"X1= "<<b<<"+"<<D<<" _/"<<r<<endl<<"X2= "<<b<<"-"<<D<<" _/"<<r;
        }
    }
    else if(y<0)
    {
        y=-y;
        D=root(y);
        z=square(D);
            r=y/(D*D);
            if((b==0||b/(2*a)&&D/(2*a)))
            {
                b1=-b/(2*a); y1=D/(2*a);
                if(r==1)
                    cout<<"Roots are imaginary."<<endl<<"X1= "<<b1<<"+"<<y1<<"i"<<endl<<"X2= "<<b1<<"-"<<y1<<"i";
                else
                    cout<<"Roots are imaginary."<<endl<<"X1= "<<b1<<"+"<<y1<<" i_/"<<r<<endl<<"X2= "<<b1<<"-"<<y1<<" i_/"<<r;
            }
            else
            {
                b=-b;
                cout<<"Roots are imaginary."<<endl<<"X1= "<<b<<"/2*"<<a<<"+(i"<<D<<" _/"<<r<<")/2*"<<a<<endl<<"X2= "<<b<<"/2*"<<a<<"-(i"<<D<<" _/"<<r<<")/2*"<<a;
            }
    }
    getch();
}