#include<iostream>
using namespace std;
class student
{
    private:
        int age;
        string name;
    public:
        void SetData(int a,string n)
        {   age=a;  name=n; }
        void ShowData()
        {
            cout<<" Age = "<<age;
            cout<<" Name = "<<name<<endl;
        }
};
int main()
{
    student s1;
    s1.SetData(19,"MR.RITU-R");
    pair <string,int>p1;
    pair <string,string>p2;
    pair <string,float>p3;
    pair <int,student>p4;
    p1=make_pair("RITURAJ",40);
    p2=make_pair("INDIA","NEW DELAHI");
    p3=make_pair("Drilling C++",546.34);
    p4=make_pair(40,s1);
    cout<<"Pair 1"<<endl;
    cout<<"Name = "<<p1.first<<" Roll no. = "<<p1.second<<endl;
    cout<<"Pair 2"<<endl;
    cout<<"Country = "<<p2.first<<" Capital = "<<p2.second<<endl;
    cout<<"Paor 3"<<endl;
    cout<<"Book Name = "<<p3.first<<" price = "<<p3.second<<endl;
    cout<<"Pair 4"<<endl;
    cout<<"Roll no. = "<<p4.first;
    student s2;
    s2=p4.second;
    s2.ShowData();
    return 0;
}