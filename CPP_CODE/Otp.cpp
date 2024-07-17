#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int OTP(int n)
{
    int i,otp=0;
    srand(time(NULL));
    for(i=1;i<=n;i++)
        otp=otp*10+rand()%10;
    return otp;
}
int main()
{
    int n;
    cout<<"Enter digit of 'OTP'"<<endl<<"D= ";
    cin>>n;
    cout<<"Your OTP = "<<OTP(n);
    getch();
}