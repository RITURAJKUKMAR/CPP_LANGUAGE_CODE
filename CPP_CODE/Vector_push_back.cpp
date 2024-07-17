#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v1;
    int a=10;
    cout<<"Capacity = ";
    cout<<v1.capacity()<<" ";
    for(int i=0;i<10;i++)
    {
        v1.push_back(a++);
        cout<<v1.capacity()<<" ";
    }
    cout<<"\nValue = ";
    for(int i=0;i<10;i++)
        cout<<v1[i]<<" ";
    cout<<"\n\nAfter pop \nCapacity = ";
    for(int i=0;i<3;i++)
    {
        v1.pop_back();
        cout<<v1.capacity()<<" ";
    }
    cout<<"\nValue = ";
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl<<"Size (Contral position) = "<<v1.size();
    v1.push_back(1000);
    cout<<"\nValue = ";
    for(int i=0;i<10;i++)
        cout<<v1[i]<<" ";
    cout<<endl<<"Value of index no.-3 = "<<v1.at(2);
    cout<<endl<<"1st value = "<<v1.front();
    cout<<endl<<"Last value = "<<v1.back();  //Last index is empty
    vector<int>:: iterator it=v1.begin();
    v1.insert(it+2,35);   //insert the value of index no. 3
    cout<<"\nValue = ";
    for(int i=0;i<10;i++)
        cout<<v1[i]<<" ";
    v1.clear();  //contral position zero & clear all elements
    cout<<endl<<"Size (Contral position) = "<<v1.size();
    return 0;
}