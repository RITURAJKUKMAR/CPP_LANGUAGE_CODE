#include<iostream>
#include<conio.h>
using namespace std;
struct STUDENTS
{
    char name[50];
    int marks;
    int roll_no;
    void input()
    {
        cout<<"Enter students name, roll no. and marks"<<endl;
        cin>>name>>roll_no>>marks;
    }
    void print()
    {
        cout<<name<<" "<<roll_no<<" "<<marks<<endl;
    }
};
int main()
{
    STUDENTS s1,s2;
    s1.input();
    s2.input();
    s1.print();
    s2.print();
}