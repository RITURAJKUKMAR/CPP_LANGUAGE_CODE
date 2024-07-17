#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("seekg.dat",ios::app);
    cout<<fin.tellg();
    cout<<endl<<(char)fin.get();
    cout<<endl<<fin.tellg();
    cout<<endl<<(char)fin.get();
    cout<<endl<<fin.tellg();
    fin.seekg(0);
    cout<<endl<<fin.tellg();
    cout<<endl<<(char)fin.get();
    fin.seekg(5,ios_base::cur);  //(-3,ios_base::end)  //(3,ios_base::beg)
    cout<<endl<<(char)fin.get();
    fin.seekg(-5,ios_base::end);
    cout<<endl<<fin.tellg();
    cout<<endl<<(char)fin.get();
    fin.close();
    return 0;
}