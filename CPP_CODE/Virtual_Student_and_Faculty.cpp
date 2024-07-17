#include<iostream>
#include<string.h>
using namespace std;
class person
{
    public:
        virtual void setdata()=0;
};
class student : public person
{
    private:
        char name[20];
        int roll_no;
    public:
        void setdata()
        {
            cout<<"Enter student name.\nN : ";
            fflush(stdin);
            gets(name);
            cout<<"Enter your roll no.\nRoll no. : ";
            cin>>roll_no;
        }
        void showdata()
        {
            cout<<"Name of student  = "<<name<<endl;
            cout<<"Student roll no. = "<<roll_no<<endl;
        }
};
class Faculty : public person
{
    private:
        char name[20];
        int salary;
        char subject[20];
    public:
        void setdata()
        {
            cout<<"Etner Faculty name.\nN : ";
            fflush(stdin);
            gets(name);
            cout<<"Enter Faculty salary.\nS : ";
            cin>>salary;
            cout<<"Enter Faculty subject.\nS : ";
            fflush(stdin);
            gets(subject);
        }
        void showdata()
        {
            cout<<"Name of Faculty    = "<<name<<endl;
            cout<<"Salary of Faculty  = "<<salary<<endl;
            cout<<"Subject of Faculty = "<<subject<<endl;
        }
};
int main()
{
    person *p;
    student s1;
    Faculty f1;
    p=&s1;
    p->setdata();
    p=&f1;
    p->setdata();
    s1.showdata();
    f1.showdata();
    delete p;
    return 0;
}