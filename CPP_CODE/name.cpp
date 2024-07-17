#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char name[20];
    int code;
    cout<<"Enter your name & code"<<endl;
    cin>>name;  //gets(name);
    fflush(stdin);
    cin>>code;
    cout<<"name= "<<name<<" ,code= "<<code;
    getch();
}