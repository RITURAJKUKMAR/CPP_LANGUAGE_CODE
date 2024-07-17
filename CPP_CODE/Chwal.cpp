#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long double a=1;
    cout<<"Enter a number."<<endl<<"N : ";
    cin>>n;
    for(i=1;i<n;i++)
        a=a*2;
    cout<<i<<" Times value = "<<a;
    return 0;
}