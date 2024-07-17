#include<iostream>
#include<array>
using namespace std;
int main()
{
    cout<<"ARRAY CLASS(PREDEFINE)"<<endl;
    array <int,5>even_number={2,4,6,8,10};
    cout<<"First element = "<<even_number.front()<<endl;
    cout<<"Last element = "<<even_number.back()<<endl;
    cout<<"2nd element = "<<even_number.at(1)<<endl;
    cout<<"4th element = "<<even_number[3]<<endl;
    cout<<"Size = "<<even_number.size()<<endl;
    array <int,5>odd_number={1,3,5,9,8};
    odd_number.swap(even_number);
    cout<<"Even numbers = ";
    for(int i=0;i<5;i++)
        cout<<even_number.at(i)<<" ";
    cout<<endl<<"Odd numbers = ";
    for(int i=0;i<5;i++)
        cout<<odd_number[i]<<" ";
    even_number.fill(4);
    cout<<endl<<"Even numbers(fill no. 4) = ";
    for(int i=0;i<5;i++)
        cout<<even_number.at(i)<<" ";
    return 0;
}