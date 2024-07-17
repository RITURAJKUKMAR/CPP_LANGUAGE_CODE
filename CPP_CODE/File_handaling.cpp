#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char n[20]={"RITURAJ KUMAR"},n1; int i=0;
    ofstream fout;
    ifstream fin;
    fout.open("file.txt");
    fout<<n;
    fout.close();
    fin.open("file.txt");
    fin>>n;
    cout<<n<<endl;
    fin.close();
    
    fin.open("file.txt");
    while(!fin.eof())
    {
        n1=fin.get();
        n[i]=n1;
        i++;
    }
    cout<<n;
    fin.close();
    return 0;
}