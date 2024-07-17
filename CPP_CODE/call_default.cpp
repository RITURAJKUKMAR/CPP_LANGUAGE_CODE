#include<iostream>
#include<conio.h>
using namespace std;
int RITU(int,int=0,int=0);
int RAJ(int x,int y=0,int z=0)
{
    return(x+y+z);
}
int main()
{
    int a,b,c;
    cout<<"Enter two number."<<endl;
    cin>>a>>b;
    cout<<"Sum of A & b= "<<RITU(a,b)<<endl;
    cout<<"Sum of A & b= "<<RAJ(a,b)<<endl;
    cout<<"Enter three number."<<endl;
    cin>>a>>b>>c;
    cout<<"sum of A,b &c= "<<RITU(a,b,c)<<endl;
    cout<<"sum of A,b &c= "<<RAJ(a,b,c)<<endl;
}
int RITU(int x,int y,int z)
{
    return(x+y+z);
}