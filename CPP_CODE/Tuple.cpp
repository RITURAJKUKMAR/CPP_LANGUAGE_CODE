#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple <string,int,int>t1;
    t1=make_tuple("RITURAJ KUMAR",40,643);
    cout<<"Name = ";
    cout<<get<0>(t1);
    cout<<endl<<"Roll no. = ";
    cout<<get<1>(t1);
    cout<<endl<<"Marks = ";
    cout<<get<2>(t1);
    return 0;
}