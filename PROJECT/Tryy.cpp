#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    char a,b;
    a='R';
    b=a;
    for(int i=0;;i++)
    {
        //system("cls");
        cout<<i;
        if(getch())
        {
            cout<<b;
            //exit(1);
        }
    }
}