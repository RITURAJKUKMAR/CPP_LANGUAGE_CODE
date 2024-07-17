#include<iostream>
#include<fstream>  //not necessary
#include<conio.h>
using namespace std;
int main()
{
    char c;
    fstream f;
    f.open("File_opening_mode.dat",ios::out);
    f<<"MY NAME IS RITURAJ KUMAR.\nI BELONG TO CHAMPARAN BIHAR.";
    f.close();
    f.open("File_opening_mode.dat",ios::in);
    while(!f.eof())
    {
        c=f.get();
        cout<<c;
    }
    f.close();
    getch();
    cout<<endl<<endl;
    f.open("File_opening_mode.dat",ios::app);
    f<<"\nI HAVE COMPALITADE CLASS 12TH IN BIHAR.\nMY BRANCH NAME IS CSAI.";
    f.close();
    f.open("File_opening_mode.dat",ios::in);
    while(!f.eof())
    {
        c=f.get();
        cout<<c;
    }
    f.close();
    cout<<endl;
    f.open("FILE.dat",ios::out|ios::binary);   //ate for update
    f<<"MY NAME IS RITURAJ KUMAR\n7";
    cout<<f.tellp()<<endl;      //position for open file  write mode
    f.close();
    f.open("FILE.dat",ios::in|ios::binary);
    while(!f.eof())
    {
        cout<<f.tellg();  //position for opoen file read mode
        c=f.get();
        cout<<c<<endl;
    }
    f.close();
}