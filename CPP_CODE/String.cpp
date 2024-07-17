#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[20],ch[20];
    cout<<"Enter your name\nName : ";
    gets(c);
    cout<<"name"<<c<<endl;
    strcpy(ch,c);
    cout<<"name"<<ch;
    cout<<"\nEnter your name\nName : ";
    gets(c);
    cout<<"name"<<c<<endl;
    cout<<"name"<<ch;
    return 0;
}