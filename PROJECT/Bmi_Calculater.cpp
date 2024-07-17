// BMI CALCULATER
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
void BMI(float w,float l)
{
    float BMI;
    system("cls");
    cout<<"*.*.*.*.*. [ BMI CALCULATER ] .*.*.*.*.*\n\n";
    cout<<"Weight  (kilogram)   = "<<w<<endl;
    cout<<"Height  (centimeter) = "<<l<<endl<<endl<<endl;
    l=l/100;
    l=pow(l,2);
    BMI=w/l;
    cout<<"___________________________________________\n";
    cout<<"|               O. -> [OFF]               |\n";
    cout<<"|-----------------------------------------|\n";
    cout<<"| [UNDERWEIGHT]   [NORMAL]   [OVERWEIGHT] |\n";
    cout<<"| .............  ----------  ============ |\n";
    cout<<"|                                         |\n";
    if(BMI<18.5)
        cout<<"|    [BMI] = "<<BMI<<"  : (UNDERWEIGHT)     |\n";
    else if(BMI<=25&&BMI>=18.5)
        cout<<"|       [BMI] = "<<BMI<<"  : (NORMAL)        |\n";
    else if(BMI>25)
        cout<<"|   [BMI] = "<<BMI<<"  :    (OVERWEIGHT)    |\n";
    cout<<"|-----------------------------------------|\n";
    char c=getch();
    if('o'==c||'O'==c)
        exit(1);
}
void Home()
{
    while(1)
    {
        float w=0,l=0;
        system("cls");
        cout<<"*.*.*.*.*. [ BMI CALCULATER ] .*.*.*.*.*\n\n";
        cout<<"Weight  (kilogram)   : ";
        cin>>w;
        cout<<"Height  (centimeter) : ";
        cin>>l;
        BMI(w,l);
    }
}
int main()
{
    Home();
    return 0;
}