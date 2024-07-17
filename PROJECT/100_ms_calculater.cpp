//............100 MS CLACULWTER.............
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
#define PI 3.141592654
#define e 2.718281828
#define square(a) a*a
using namespace std;
class complex
{
    private:
        float a,b;
    public:
        void setnumber(float x,float y)
        {    a=x; b=y;   }
        void shownumber()
        {    cout<<a<<" + "<<b<<"i";  }
        
};
class Equ
{
    private:
        float a,b,c,ans;
    public:
        void set(float x,float y,float z)
        {    a=x; b=y; c=z;     }
        Equ operator *(float x)
        {
            Equ z;
            z.a=a*x;
            z.b=b*x;
            z.c=c*x;
            return z;
        }
        void show(int i)
        {
            if(i==1)
                ans=c/b;
            else
                ans=c/a;
            cout<<"x"<<i<<" = "<<ans<<endl;
        }
        Equ operator -(Equ x)
        {
            Equ z;
            z.a=a-x.a;
            z.b=b-x.b;
            z.c=c-x.c;
            return z;
        }
};
double ans=0;
int i=2,x=1,y,z=1,ans2[30];
char h[30];
long int number(char*);
double power (double,int);
void TRIGONOMETRY();
void POWER();
void Mode();
void EQN();
void fact();
int root(int);
int Equaton2();
void BASE();
void Home();
void ROOTs();
void Unknown();
void Degree();
void BTD();
void DTB();
void HTD();
void DTH();
void AC();
void Key();
void ACB();
void OTD();
void DTO();
void Dgree2();
void ART();
void CMPLX();
void SQRT();
void LOGIC();
void Expo();
void sin();
void Sin();
void cmpx();
//void Sin_1();
void cmpx()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> MODE\tA.> AC\t   O.> OFF"<<endl;
    cout<<"Otherwise press Enter >"<<endl;
    switch(getch())
    {
        case 'O':
        case 'o':
            exit(1);
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'h':
        case 'H':
            Home();
            break;
    }
    float x,y;
    complex c1,c2;
    cout<<"Enter first complex number.\na : ";
    cin>>x;
    cout<<"b : ";
    cin>>y;
    c1.setnumber(x,y);
    cout<<"Enter second complex number.\na : ";
    cin>>x;
    cout<<"b : ";
    cin>>y;
    c2.setnumber(x,y);
}
void CMPLX()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.   HOME\nA.   AC\nO.   OFF"<<endl;
    cout<<"\t\t"<<ans<<endl;
    cout<<"1.>  CACULATION OF COMOEX NUMBER\n";
    cout<<"2.>  CHANGE POLAR TO RECTANGULAR\n";
    char c[100];
    gets(c);
    if(c[0]=='h'||c[0]=='H')
        Home();
    else if(c[0]=='a'||c[0]=='A')
            AC();
    else if(c[0]=='k'||c[0]=='K')
            Key();
    else if(c[0]=='O'||c[0]=='o')
            exit(1);
    else
    {
        switch(c[0])
        {
            case '1':
                while(1)
                cmpx();
                break;
        }
    }
}
void Sin()
{
    double n;
    char c[15];
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl;
    cout<<"\t\t"<<ans<<endl<<Sin ;
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        ACB();
    }
    else if(c[0]=='o'||c[0]=='O')
        exit(1);
    else
    {
        n=number(c);
        int x=n;
        if(x%2==0)
            ans=0;
        else if(n==30)
            ans=0.5;
        else if(n==60)
            ans=0.86602540;
        else if(n==90)
            ans=1;
        else if(n==120)
            ans=0.86602540;

    }
}
void sin()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl<<endl;
    cout<<"1.>  Sin\n2.>  Sin^-1";
    switch(getch())
    {
        case 'h':
        case 'H':
            Home();
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'O':
        case 'o':
            exit(1);
            break;
        case '1':
            while(1)
            Sin();
            break;
        /*case '2':
            while(1)
            Sin_1();
            break;*/
    }
}
void TRIGONOMETRY()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl<<endl;
    cout<<"1.>  Sin OR Sin^-1\n2.>  Cos OR Cos^-1\n3.>  Tan OR Tan^-1";
    switch(getch())
    {
        case 'h':
        case 'H':
            Home();
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'o':
        case 'O':
            exit(1);
            break;
        case '1':
            sin();
            break;
    }
}
void Expo()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl;
    cout<<"\t\t"<<ans;    
    char x[10];
    cout<<"\ne^";
    gets(x);
    switch(x[0])
    {
        case 'o':
        case 'O':
            exit(1);
            break;
        case 'a':
        case 'A':
            ACB();
            break;
        case 'h':
        case 'H':
            Home();
            break;
    }
    int n=number(x);
    ans=power(e,n);
}
int Equaton2()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl;
    cout<<"Otherwise press Enter >"<<endl;
    switch(getch())
    {
        case 'O':
        case 'o':
            exit(1);
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'h':
        case 'H':
            Home();
            break;
    }
    float a1,b1,c1,a2,b2,c2;
    Equ e1,e2;
    cout<<"Enter the value of a , b and c of E1.\na1 : ";
    cin>>a1;
    cout<<"b1 : ";
    cin>>b1;
    cout<<"c1 : ";
    cin>>c1;
    cout<<"Enter the value of a , b and c of E1.\na2 : ";
    cin>>a2;
    cout<<"b2 : ";
    cin>>b2;
    cout<<"c2 : ";
    cin>>c2;
    e1.set(a1,b1,c1);
    e2.set(a2,b2,c2);
    e1=e1*a2;
    e2=e2*a1;
    e1=e1-e2;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    e1.show(1);
    e1.set(a1,b1,c1);
    e2.set(a2,b2,c2);
    e1=e1*b2;
    e2=e2*b1;
    e1=e1-e2;
    e1.show(2);cout<<"\nPress enter >";
    getch();
}
int AROOTS(int a,int b,int c)
{
    if(a!=1)
    {
        if(a%i==0)
        {
            a=a/i;
            c++;
            if(c==b)
            {
                x=x*i;
                c=0;
            }
            AROOTS(a,b,c);
        }
        else
        {
            c=0;
            i++;
            AROOTS(a,b,c);
        }
    }
    return x;
}
void ART()
{
    double a,b;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl;
    cout<<"Otherwise press Enter >"<<endl;
    cout<<"\t\t"<<ans<<"_/"<<z<<endl;
    switch(getch())
    {
        case 'O':
        case 'o':
            exit(1);
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'H':
        case 'h':
            Home();
            break;
    }
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"\t\t"<<ans<<"_/"<<z<<"\nEnter the values of x and y \nx_/y\nX : ";
    cin>>b;
    cout<<"Y : ";
    cin>>a;
    {
        ans=AROOTS(a,b,0);
        y=ans;
        for(i=0;i<b;i++)
            z=z*y;
        z=a/z;
    }
}
void SQRT()
{
    int n=0;
    char c[10];
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME"<<"\tA.> AC"<<"      O.> OFF"<<endl;
    cout<<"\t\t"<<ans<<"_/"<<x<<endl;
    x=0;
    y=0;
    cout<<"\t_/";
    gets(c);
    if(c[0]=='H'||c[0]=='h')
    {
        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        AC();
    }
    else if(c[0]=='O'||c[0]=='o')
        exit(1);
    else
    {
        n=number(c);
        ans=root(n);
        y=ans;
        x=n/(y*y);
    }
}
void ROOTs()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"1.   SQUAREROOT"<<endl;
    cout<<"2.   ANY-ROOT"<<endl;
    switch(getch())
    {
        case '1':
        while(1)
        SQRT();
        break;
        case '2':
        while(1)
        ART();
        break;
    }
}
void POWER()
{
    double a,b;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   E.> OFF"<<endl;
    cout<<"Otherwise press Enter >"<<endl;
    cout<<"\t\t"<<ans<<endl;
    switch(getch())
    {
        case 'o':
        case 'O':
            exit(1);
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'H':
        case 'h':
            Home();
            break;
    }
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"\t\t"<<ans<<endl<<"BASE  : ";
    cin>>a;
    cout<<"POWER : ";
    cin>>b;
    int i,n=a;
    for(i=1;i<b;i++)
        a=a*n;
    if(b==0)
        ans=1;
    else
        ans=a;
}
void fact()
{
    double a,b;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME"<<"\tA.> AC"<<"      O.> OFF"<<endl;
    cout<<"\t\t"<<ans<<endl<<"\t!";
    gets(h);
    if(h[0]=='0')
        ans=1;
    else if(h[0]=='h'||h[0]=='h')
        Home();
    else if(h[0]=='a'||h[0]=='A')
        AC();
    else if(h[0]=='O'||h[0]=='o')
        exit(1);
    else
    {
        a=number(h);
        b=a;
        for(int i=1;i<b;i++)
            a=a*i;
        ans=a;
    }
}
int root(int x)
{
    int i,r=1;
    if(x==0)
        return 0;
    else
    {
        for(i=2;2<=x;i++)
        {
            while(1)
            {
                if(x%i==0)
                {
                    x=x/i;
                    if(x%i==0)
                    {
                        x=x/i;
                        r=r*i;
                    }
                }
                else
                    break;
            }
        }
        return r;
    }
}
void Dgree2()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> MODE\tA.> AC\t   O.> OFF"<<endl;
    cout<<"Otherwise press Enter >"<<endl;
    switch(getch())
    {
        case 'O':
        case 'o':
            exit(1);
            break;
        case 'a':
        case 'A':
            AC();
            break;
        case 'h':
        case 'H':
            Home();
            break;
    }
    int a,b,c,x,x1,x2,y,z,r,D,b1,y1,f;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"Enter value of a ,b & c"<<endl<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    y=square(b)-(4*a*c);
    if(y>=0)
    {
        D=root(y);
        z=square(D);
        if(z==y)
        {
            if(y==0)
            {
                x=-b/(2*a);
                cout<<"Roots are real and equal."<<endl<<"x= "<<x;
            }
            else if(y>0)
            {
                x1=(-b+root(y))/(2*a);
                x2=(-b-root(y))/(2*a);
                cout<<"Roots are real and differents."<<endl<<"x1= "<<x1<<", x2= "<<x2;
            }
        }
        else
        {
            D=root(y);
            z=square(D);
            r=y/z;
            if(b/(2*a)&&D/(2*a))
            {
                b1=-b/(2*a); y1=D/(2*a);
                cout<<"Roots are imaginary."<<endl<<"X1= "<<b1<<"+"<<y1<<" _/"<<r<<endl<<"X2= "<<b1<<"-"<<y1<<" _/"<<r;
            }
            else
                cout<<"Roots are imaginary."<<endl<<"X1= "<<b<<"+"<<D<<" _/"<<r<<endl<<"X2= "<<b<<"-"<<D<<" _/"<<r;
        }
    }
    else if(y<0)
    {
        y=-y;
        D=root(y);
        z=square(D);
            r=y/(D*D);
            if((b==0||b/(2*a)&&D/(2*a)))
            {
                b1=-b/(2*a); y1=D/(2*a);
                if(r==1)
                    cout<<"Roots are imaginary."<<endl<<"X1= "<<b1<<"+"<<y1<<"i"<<endl<<"X2= "<<b1<<"-"<<y1<<"i";
                else
                    cout<<"Roots are imaginary."<<endl<<"X1= "<<b1<<"+"<<y1<<" i_/"<<r<<endl<<"X2= "<<b1<<"-"<<y1<<" i_/"<<r;
            }
            else
            {
                b=-b;
                cout<<"Roots are imaginary."<<endl<<"X1= "<<b<<"/2*"<<a<<"+(i"<<D<<" _/"<<r<<")/2*"<<a<<endl<<"X2= "<<b<<"/2*"<<a<<"-(i"<<D<<" _/"<<r<<")/2*"<<a;
            }
    }
    getch();
}
void Degree()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"0.   HOME"<<endl;
    cout<<"1.   Degree- 2?"<<endl;
    cout<<"2.   Degree- 3?"<<endl;
    switch(getch())
    {
        case '0': Home();
        break;
        case '1':
        while(1)
        Dgree2();
        break;
        /*case '2':
        while(1)
        Degree3();
        break;*/
    }
}
void Unknown()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"0.   HOME"<<endl;
    cout<<"1.   UNKNOWNS- 2?"<<endl;
    cout<<"2.   UNKNOWNS- 3?"<<endl;
    switch(getch())
    {
        case '0': Home();
        break;
        case '1':
        while(1)
        Equaton2();
        break;
        /*case '2':
        while(1)
        Equation3();
        break;*/
    }
}
void EQN()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"0.   HOME"<<endl;
    cout<<"1.   Unknowns?"<<endl;
    cout<<"2.   Degree?"<<endl;
    switch(getch())
    {
        case '0': Home();
        break;
        case '1':
        while(1)
        Unknown();
        break;
        case '2':
        while(1)
        Degree();
        break;
    }
}
double power(double a,int b)
{
    int i;
    double n=a;
    for(i=1;i<b;i++)
        a=a*n;
    if(b==0)
        return 1;
    return a;
}
void HTD()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> MODE"<<"\ta.> AC"<<"       O.> OFF"<<endl;
    cout<<"HEX to DEC"<<endl;
    cout<<"\t\t"<<ans<<endl;
    char c[100];
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Home();
    }
    else if(c[0]=='a')
    {
        AC();
    }
    else if(c[0]=='O'||c[0]=='o')
        exit(1);
    else
    {
        strrev(c);
        for(int i=0;c[i]!=NULL;)
        {
            if(c[i]=='0')
                ans=ans+power(16,i)*0;
            else if(c[i]=='1')
                ans=ans+power(16,i)*1;
            else if(c[i]=='2')
                ans=ans+power(16,i)*2;
            else if(c[i]=='3')
                ans=ans+power(16,i)*3;
            else if(c[i]=='4')
                ans=ans+power(16,i)*4;
            else if(c[i]=='5')
                ans=ans+power(16,i)*5;
            else if(c[i]=='6')
                ans=ans+power(16,i)*6;
            else if(c[i]=='7')
                ans=ans+power(16,i)*7;
            else if(c[i]=='8')
                ans=ans+power(16,i)*8;
            else if(c[i]=='9')
                ans=ans+power(16,i)*9;
            else if(c[i]=='A')
                ans=ans+power(16,i)*10;
            else if(c[i]=='B')
                ans=ans+power(16,i)*11;
            else if(c[i]=='C')
                ans=ans+power(16,i)*12;
            else if(c[i]=='D')
                ans=ans+power(16,i)*13;
            else if(c[i]=='E')
                ans=ans+power(16,i)*14;
            else if(c[i]=='F')
                ans=ans+power(16,i)*15;
            else
            {
                cout<<"Systax ERROR"<<endl;
                sleep(2);
                Home();
            }
            i++;
        }
    }
}
void DTH()
{
    int i=0,n=0;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME"<<"\tA.> AC"<<"      O.> OFF"<<endl;
    cout<<"DEC to HEX"<<endl<<"\t\t";
    for(;x>=0;x--)
        cout<<h[x];
    char c[100];
    cout<<endl;
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Mode();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        ACB();
    }
    else if(c[0]=='o'||c[0]=='O')
        exit(1);
    else
    {
        n=number(c);
        x=-1;
        for(i=0;n;i++)
        {
            if(n%16==0)
                h[i]='0';
            else if(n%16==1)
                    h[i]='1';
            else if(n%16==2)
                    h[i]='2';
            else if(n%16==3)
                    h[i]='3';
            else if(n%16==4)
                    h[i]='4';
            else if(n%16==5)
                    h[i]='5';
            else if(n%16==6)
                    h[i]='6';
            else if(n%16==7)
                    h[i]='7';
            else if(n%16==8)
                    h[i]='8';
            else if(n%16==9)
                    h[i]='9';
            else if(n%16==10)
                    h[i]='A';
            else if(n%16==11)
                    h[i]='B';
            else if(n%16==12)
                    h[i]='C';
            else if(n%16==13)
                    h[i]='D';
            else if(n%16==14)
                    h[i]='E';
            else if(n%16==15)
                    h[i]='F';
            n=n/16;
            x++;
        }
    }
}
void ACB()
{
    for(int i=0;i<30;i++)
    {
        ans2[i]=0;
        h[i]='0';
    }
    x=0;
}
long int number(char *c)
{
    long int n=0;
    int i=0;
    while(c[i]!=NULL)
    {
        switch(*(c+i))
        {
            case '0': n=n*10+0;
            break;
            case '1': n=n*10+1;
            break;
            case '2': n=n*10+2;
            break;
            case '3': n=n*10+3;
            break;
            case '4': n=n*10+4;
            break;
            case '5': n=n*10+5;
            break;
            case '6': n=n*10+6;
            break;
            case '7': n=n*10+7;
            break;
            case '8': n=n*10+8;
            break;
            case '9': n=n*10+9;
            break;
        }
        i++;
    }
    return n;
}
void calculation()
{
    int i=0,f=0,l=0;
    char o2=' ',o1=' ';
    double n2=0,n1=0;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.   HOME\nA.   AC\nO.   OFF"<<endl;
    cout<<"\t\t"<<ans<<endl;
    char c[100];
    gets(c);
    if(c[0]=='h'||c[0]=='H')
        Home();
    else if(c[0]=='a'||c[0]=='A')
            AC();
    else if(c[0]=='k'||c[0]=='K')
            Key();
    else if(c[0]=='O'||c[0]=='o')
            exit(1);
    else
    {
        for(i=0;*(c+i)!=NULL;)
        {
            while(*(c+i)=='0'||*(c+i)=='1'||*(c+i)=='2'||*(c+i)=='3'||*(c+i)=='4'||*(c+i)=='5'||*(c+i)=='6'||*(c+i)=='7'||*(c+i)=='8'||*(c+i)=='9')
            {
                switch(*(c+i))
                {
                    case '0': ans=ans*10+0;
                    break;
                    case '1': ans=ans*10+1;
                    break;
                    case '2': ans=ans*10+2;
                    break;
                    case '3': ans=ans*10+3;
                    break;
                    case '4': ans=ans*10+4;
                    break;
                    case '5': ans=ans*10+5;
                    break;
                    case '6': ans=ans*10+6;
                    break;
                    case '7': ans=ans*10+7;
                    break;
                    case '8': ans=ans*10+8;
                    break;
                    case '9': ans=ans*10+9;
                    break;
                }
                i++;
            }
            while(*(c+i)=='+'||*(c+i)=='-'||*(c+i)=='*'||*(c+i)=='/')
            {
                switch(*(c+i))
                {
                    case '+': o1='+';
                    break;
                    case '-': o1='-';
                    break;
                    case '/': o1='/';
                    break;
                    case '*': o1='*';
                    break;
                }
                i++;
            }
            while(*(c+i)=='0'||*(c+i)=='1'||*(c+i)=='2'||*(c+i)=='3'||*(c+i)=='4'||*(c+i)=='5'||*(c+i)=='6'||*(c+i)=='7'||*(c+i)=='8'||*(c+i)=='9')
            {
                switch(*(c+i))
                {
                    case '0': n2=n2*10+0;
                    break;
                    case '1': n2=n2*10+1;
                    break;
                    case '2': n2=n2*10+2;
                    break;
                    case '3': n2=n2*10+3;
                    break;
                    case '4': n2=n2*10+4;
                    break;
                    case '5': n2=n2*10+5;
                    break;
                    case '6': n2=n2*10+6;
                    break;
                    case '7': n2=n2*10+7;
                    break;
                    case '8': n2=n2*10+8;
                    break;
                    case '9': n2=n2*10+9;
                    break;
                }
                i++;
            }
            switch(o1)
            {
                case '+': ans=ans+n2;n2=0;
                break;
                case '-': ans=ans-n2;n2=0;
                break;
                case '*': ans=ans*n2;n2=0;
                break;
                case '/': ans=ans/n2;n2=0;
                break;
            }
        }
    }
}
void Mode()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"0.   HOME\t";
    cout<<"1.   COMP"<<endl;
    cout<<"2.   CMPLX\t";
    cout<<"3.   SD"<<endl;
    cout<<"4.   REG\t";
    cout<<"5.   BASE"<<endl;
    cout<<"6.   EQN\t";
    cout<<"7.   Deg"<<endl;
    cout<<"8.   Red\t";
    cout<<"9.   Gra"<<endl;
    cout<<"11.  Fix\t";
    cout<<"12.  Sci"<<endl;
    cout<<"13.  Norm\t";
    cout<<"14.  Disp"<<endl;
    cout<<"15.  CONT\t"<<endl;
    switch(getch())
    {
        case '0': Home();
        break;
        /*case '1': COMP();
        break;*/
        case '2': CMPLX();
        break;
        /*case '3': SD();
        break;
        case '4': REG();
        break;*/
        case '5': BASE();
        break;
        case '6': EQN();
        break;
        /*case '7': Deg();
        break;
        case '8': Red();
        break;
        case '9': Gra();
        break;
        case '11': Fix();
        break;
        case '12': Sci();
        break;
        case '13': Norm();
        break;
        case '14': Disp();
        break;
        case '15': CONT();
        break;*/
    }
}
void Key()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"0.   DIFFERENTIATION / INTEGRATION"<<endl;
    cout<<"1.   FACTORIAL"<<endl;
    cout<<"2.   ANY-ROOT / SQUAREROOT"<<endl;
    cout<<"3.   POWER"<<endl;
    cout<<"4.   LOG / ln"<<endl;
    cout<<"5.   e^x"<<endl;
    cout<<"6.   TRIGONOMETRY"<<endl;
    cout<<"7.   hyp TRIGONOMETRY"<<endl;
    /*cout<<"8.   Red"<<endl;
    cout<<"9.   Gra"<<endl;
    cout<<"11.  Fix"<<endl;
    cout<<"12.  Sci"<<endl;
    cout<<"13.  Norm"<<endl;
    cout<<"14.  Disp"<<endl;
    cout<<"15.  CONT"<<endl;*/
    switch(getch())
    {
        case '1':
        while(1)
        fact();
        break;
        case '3':
        while(1)
        POWER();
        break;
        case '2':
        ROOTs();
        break;
        case '5':
        while(1)
        Expo();
        break;
        case '6':
        while(1)
        TRIGONOMETRY();
        break;
    }
}
void BASE()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"0.   HOME"<<endl;
    cout<<"1.   BIN to DEC"<<endl;
    cout<<"2.   DEC to BIN"<<endl;
    cout<<"3.   OCT to DEC"<<endl;
    cout<<"4.   DEC to OCT"<<endl;
    cout<<"5.   HEX to DEC"<<endl;
    cout<<"6.   DEC to HEX"<<endl;
    cout<<"7.   LOGIC"<<endl;
    switch(getch())
    {
        case '0': Home();
        break;
        case '1': 
        while(1)
        BTD();
        break;
        case '2':
        while(1)
        DTB();
        break;
        case '3':
        while(1)
        OTD();
        break;
        case '4':
        while(1)
        DTO();
        break;
        case '5':
        while(1)
        HTD();
        break;
        case '6':
        while(1)
        DTH();
        break;
        case '7':
        while(1)
        LOGIC();
        break;
    }
}
void LOGIC()
{
    double n;
    int x;
    char c[15];
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME\tA.> AC\t   O.> OFF"<<endl;
    cout<<"\t\t"<<ans<<endl<<"\t";
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        ACB();
    }
    else if(c[0]=='o'||c[0]=='O')
        exit(1);
    else
    {
        n=number(c);
    }
    int a=n;
    cout<<"\n1.>  AND   &\n2.>  OR    |\n3.>  XNOR  !^\n4.>  XOR   ^\n5.>  NOT   !\n";
    gets(c);
    if(c[0]=='1')
    {
        system("cls");
        cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
        cout<<a<<" & ";
        cin>>x;
        ans=a&x;
    }
    else if(c[0]=='2')
    {
        system("cls");
        cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
        cout<<a<<" | ";
        cin>>x;
        ans=a|x;
    }
    else if(c[0]=='4')
    {
        system("cls");
        cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
        cout<<a<<" ^ ";
        cin>>x;
        ans=(a^x);
    }
    else if(c[0]=='3')
    {
        system("cls");
        cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
        cout<<a<<" !^ ";
        cin>>x;
        ans=!(a^x);
    }
    else if(c[0]=='5')
    {
        system("cls");
        cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
        cout<<a<<" ! ";
        ans=!a;
    }
}
void DTO()
{
    int i=0,n=0;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME"<<"\tA.> AC"<<"      E.> OFF"<<endl;
    cout<<"DEC to OCT"<<endl<<"\t\t";
    for(;x>=0;x--)
        cout<<ans2[x];
    char c[100];
    cout<<endl;
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        ACB();
    }
    else if(c[0]=='e'||c[0]=='E')
        exit(1);
    else
    {
        n=number(c);
        x=-1;
        for(i=0;n;i++)
        {
            if(n%8==0)
                ans2[i]=+0;
            else if(n%8==1)
                    ans2[i]=1;
            else if(n%8==2)
                    ans2[i]=2;
            else if(n%8==3)
                    ans2[i]=3;
            else if(n%8==4)
                    ans2[i]=4;
            else if(n%8==5)
                    ans2[i]=5;
            else if(n%8==6)
                    ans2[i]=6;
            else if(n%8==7)
                    ans2[i]=7;
            n=n/8;
            x++;
        }
    }
}
void OTD()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HomE"<<"\tA.> AC"<<"       E.> OFF"<<endl;
    cout<<"OCT to DEC"<<endl;
    cout<<"\t\t"<<ans<<endl;
    char c[100];
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {

        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        AC();
    }
    else if(c[0]=='e'||c[0]=='E')
        exit(1);
    else
    {
        strrev(c);
        for(int i=0;c[i]!=NULL;)
        {
            if(c[i]=='0')
                ans=ans+power(8,i)*0;
            else if(c[i]=='1')
                ans=ans+power(8,i)*1;
            else if(c[i]=='2')
                ans=ans+power(8,i)*2;
            else if(c[i]=='3')
                ans=ans+power(8,i)*3;
            else if(c[i]=='4')
                ans=ans+power(8,i)*4;
            else if(c[i]=='5')
                ans=ans+power(8,i)*5;
            else if(c[i]=='6')
                ans=ans+power(8,i)*6;
            else if(c[i]=='7')
                ans=ans+power(8,i)*7;
            else
            {
                cout<<"Systax ERROR"<<endl;
                sleep(2);
                Home();
            }
            i++;
        }
    }
}
void BTD()
{
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HOME"<<"\tA.> AC"<<"       E.> OFF"<<endl;
    cout<<"BIN to DEC"<<endl;
    cout<<"\t\t"<<ans<<endl;
    char c[100];
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        AC();
    }
    else if(c[0]=='e'||c[0]=='E')
        exit(1);
    else
    {
        strrev(c);
        for(int i=0;c[i]!=NULL;)
        {
            if(c[i]=='1')
                ans=ans+power(2,i)*1;
            else if(c[i]=='0')
                ans=ans+power(2,i)*0;
            else
            {
                cout<<"Systax ERROR"<<endl;
                sleep(2);
                Home();
            }
            i++;
        }
    }
}
void DTB()
{
    int i=0,n=0;
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"H.> HomE"<<"\tA.> AC"<<"      E.> OFF"<<endl;
    cout<<"DEC to BIN"<<endl<<"\t\t";
    for(;x>=0;x--)
        cout<<ans2[x];
    char c[100];
    cout<<endl;
    gets(c);
    if(c[0]=='h'||c[0]=='H')
    {
        Home();
    }
    else if(c[0]=='a'||c[0]=='A')
    {
        ACB();
    }
    else if(c[0]=='e'||c[0]=='E')
        exit(1);
    else
    {
        n=number(c);
        x=-1;
        for(i=0;n;i++)
        {
            if(n%2==0)
                ans2[i]=+0;
            else if(n%2==1)
                ans2[i]=1;
            n=n/2;
            x++;
        }
    }
}
void AC()
{
    ans=0000;
    x=1;
    z=1;
    i=2;
}
void Home()
{
    char c[1];
    system("cls");
    cout<<"##########.....100 MS CALCULATER.....##########"<<endl<<endl;
    cout<<"M.>   MODE\nA.>   AC\nC.>   CALCULATION\nK.>   KEY\nE.>   OFF"<<endl;
    cout<<"\t\t"<<ans<<endl;
    gets(c);
    if(c[0]=='m'||c[0]=='M')
        Mode();
    else if(c[0]=='a'||c[0]=='A')
            AC();
    else if(c[0]=='k'||c[0]=='K')
            Key();
    else if(c[0]=='e'||c[0]=='E')
            exit(1);
    else  if(c[0]=='c'||c[0]=='C')
    {
        while(1)
        calculation();
    }
}
int main()
{
    while(1)
    Home();
    return 0;
}