// UNIT CONVERTER
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void LENGTH()
{
    char NUM[10];
    cout<<"*.*.*.*.*.UNIT CONVERTER.*.*.*.*.*"<<endl<<endl;
    cout<<"H. -> GOTO HOME"<<endl;

}
void Home()
{
    cout<<"*.*.*.*.*.UNIT CONVERTER.*.*.*.*.*"<<endl<<endl;
    cout<<"1. -> GOTO HOME"<<endl;
    cout<<"2. -> CALCULATE LENGTH"<<endl;
    switch(getch())
    {
        case '1':
            Home();
            break;
        case '2':
            LENGTH();
            break;
    }
}
int main()
{
    return 0;
}