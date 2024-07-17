#include<iostream>
#include<time.h>
#include<conio.h>
#include<unistd.h>
#include<stdlib.h>
using namespace std;
int RITU(int a)
{
    if(a==0)
        return (system("color 0"));
    else if(a==1)
        return (system("color 1"));
    else if(a==2)
        return (system("color 2"));
    else if(a==3)
        return (system("color 3"));
    else if(a==4)
        return (system("color 4"));
    else if(a==5)
        return (system("color 5"));
    else if(a==6)
        return (system("color 6"));
    else if(a==7)
        return (system("color 7"));
    else if(a==8)
        return (system("color 8"));
    else if(a==9)
        return (system("color 9"));
    else if(a==10)
        return (system("color a"));
    else if(a==11)
        return (system("color b"));
    else if(a==12)
        return (system("color c"));
    else if(a==13)
        return (system("color d"));
    else if(a==14)
        return (system("color e"));
    else if(a==15)
        return (system("color f"));
}
int main()
{
    int i,j;
    system("cls");
    srand(time(NULL));
    while(1)
    {
        for(i=1;i<=50;i++)
        {
            for(j=1;j<=50;j++)
            {
                if(i==rand()%50)
                {
                    RITU(rand()%16);
                    cout<<" HAPPY BIRTHDAY MY DEAR ";
                    usleep(100000);
                }
                else
                    cout<<"              ";
            }
            cout<<endl;
        }
    }
}