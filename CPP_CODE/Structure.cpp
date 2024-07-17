#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct RITU
{
    char name[20];
    int roll_no;
    int mark;
}s1;
RITU s2;
RITU input()
{
    RITU s4;
    cout<<"Enter your"<<endl<<"name= ";
    cin>>s4.name;
    cout<<"Roll no.= ";
    cin>>s4.roll_no;
    cout<<"mark= ";
    cin>>s4.mark;
    cout<<"NAME= "<<s4.name<<", ROLL NO.= "<<s4.roll_no<<",MARKS= "<<s4.mark<<endl;
    return(s4);
}
void print(RITU s4)
{
    cout<<"NAME= "<<s4.name<<", ROLL NO.= "<<s4.roll_no<<", MARKS= "<<s4.mark<<endl;
}
int main()
{
    RITU s4,s3={"RITURAJ KUMAR",40,9};
    cout<<"NAME= "<<s3.name<<", ROLL NO.= "<<s3.roll_no<<", MARKS= "<<s3.mark<<endl;
    s1=s3;
    cout<<"NAME= "<<s1.name<<", ROLL NO.= "<<s1.roll_no<<", MARKS= "<<s1.mark<<endl;
    strcpy(s2.name,"RITURAJ KUMAR");
    s2.roll_no=20;
    s2.mark=10;
    cout<<"NAME= "<<s2.name<<", ROLL NO.= "<<s2.roll_no<<", MARKS= "<<s2.mark<<endl;
    s4=input();
    print(s4);
}