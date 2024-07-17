#include<iostream>
#include<math.h>
using namespace std;
int root(int x)
{
    int i,r=1;
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
int main()
{
    int a,r;
    cout<<"Enter a number."<<endl;
    cin>>a;
    r=sqrt(a);
    cout<<"R= "<<r<<endl;
    cout<<"FR= "<<root(a);
}