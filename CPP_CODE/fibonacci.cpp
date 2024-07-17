#include<iostream>
#include<conio.h>
using namespace std;
int RITU(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return RITU(n-1)+RITU(n-2);
}
int main()
{
    int x,i;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"series=";
    for(i=1;i<=x;i++)
    {
        cout<<RITU(i)<<" ";
    }
    getch();
}