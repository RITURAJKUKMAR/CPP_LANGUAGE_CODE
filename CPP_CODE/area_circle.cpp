#include<iostream>
#include<conio.h>
#define PI 3.141
#define square(a) a*a
using namespace std;
int main()
{
    float r,a;
    cout<<"Enter the value of radius of circle."<<endl<<"R= ";
    cin>>r;
    a=square(r)*PI;
    cout<<"Area of coircle = "<<a;
    getch();
}