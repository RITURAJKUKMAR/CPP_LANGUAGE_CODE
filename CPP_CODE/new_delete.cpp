#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,*p;
    cout<<"Enter arrey size.\nS : ";
    cin>>x;
    p=new int[x];
    cout<<"Enter your array elements.\n";
    for(int i=0;i<x;i++)
    {
        cin>>y;
        *(p+i)=y;
    }
    cout<<"Your array elements.\n";
    for(int i=0;i<x;i++)
    {
        cout<<*(p+i)<<" ";
    }
    delete []p;
    cout<<"\n\nEnter array size.\nS : ";
    cin>>x;
    p=new int[x];
    cout<<"Enter your array elements.\n";
    for(int i=0;i<x;i++)
    {
        cin>>y;
        *(p+i)=y;
    }
    cout<<"Your array elements.\n";
    for(int i=0;i<x;i++)
    {
        cout<<*(p+i)<<" ";
    }
    delete []p;
    return 0;
}