#include<iostream>
#include<conio.h>
using namespace std;
char op(char* O)
{
    if(O[0]=='e'||O[0]=='E')
    {   exit(1); }
    if(O[0]==' ')
    {   O[0]=O[1];}
    return O[0];
}
double num(char* O)
{
    double b=0;
    for(int i=1;O[i];i++)
    {
        if(O[i]=='0')
            b=b*10+0;
        else if(O[i]=='1')
            b=b*10+1;
        else if(O[i]=='2')
            b=b*10+2;
        else if(O[i]=='3')
            b=b*10+3;
        else if(O[i]=='4')
            b=b*10+4;
        else if(O[i]=='5')
            b=b*10+5;
        else if(O[i]=='6')
            b=b*10+6;
        else if(O[i]=='7')
            b=b*10+7;
        else if(O[i]=='8')
            b=b*10+8;
        else if(O[i]=='9')
            b=b*10+9;
    }
    return b;
}
int cal(int a,int b,char o)
{
    switch(o)
    {
        case '+': return(a+b);
        break;
        case '-': return(a-b);
        break;
        case '*': return (a*b);
        break;
        case '/': return(a/b);
        break;
        case '%': return(a%b);
    }
}
double cal(double a,double b,char o)
{
    switch(o)
    {
        case '+': return (a+b);
        break;
        case '-': return (a-b);
        break;
        case '*': return (a*b);
        break;
        case '/': return (a/b);
        break;
        case 'c': return (a=0);
    }
}
int main()
{
    system("cls");
    cout<<"Enter your first number(N1)."<<endl;
    cout<<"Enter your second number with operator."<<endl<<"like +,-,* and / than enter number(N2)."<<endl;
    cout<<"Press [c/C with enter] for clear screen."<<endl;
    cout<<"Press [e/E with enter] for exit calculator."<<endl;
    cout<<"\nPress [enter] for start.  !";
    getch();
    double a=0,b;
    char o,O[10];
    system("cls");
    cout<<"Ans = "<<a<<endl;
    cout<<"Enter a number. N1 : ";
    fflush(stdin);
    cin>>a;
    system("cls");
    cout<<"Ans = "<<a;
    cout<<"\nEnter your N2 number(+4)."<<endl<<"= "<<a<<" ";
    fflush(stdin);
    gets(O);
    o=op(O);
    b=num(O);
    a=cal(a,b,o);
    cout<<"Ans = "<<a;
    while(1)
    {
        system("cls");
        cout<<"Ans = "<<a;
        cout<<"\nEnter your N2 number(+4)."<<endl<<"= "<<a<<" ";
        fflush(stdin);
        gets(O);
        o=op(O);
        b=num(O);
        a=cal(a,b,o);
        cout<<"Ans = "<<a;
    }
    return 0;
}