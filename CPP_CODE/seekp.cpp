#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    fstream f;
    f.open("seekp.dat",ios::out);
    f<<"RITURAJ KUMAR";
    f.close();
    getch();
    f.open("seekp.dat",ios::app|ios::ate);
    cout<<f.tellp();
    f.seekp(8,ios_base::beg);
    cout<<endl<<f.tellp();
    f<<" RITU ";
    cout<<endl<<f.tellp();
    f.close();
    return 0;
}