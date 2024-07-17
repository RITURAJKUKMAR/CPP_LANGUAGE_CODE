#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    for(i=0;i<=9;i++)
        for(j=0;j<=9;j++)
            for(k=0;k<=9;k++)
                for(l=0;l<=9;l++)
                    for(m=0;m<=9;m++)
                        for(n=0;n<=9;n++)
                            cout<<i<<j<<k<<l<<m<<n<<endl;
    getch();
}