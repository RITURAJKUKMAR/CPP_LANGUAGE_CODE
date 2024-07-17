#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v1 {10,20,30,40,50};
    vector <char>v2 (3);  //three indexs
    vector <string>v3 (3,"RITU");
    cout<<"v1 = ";
    for(int i=0;i<5;i++)
        cout<<v1[i]<<" ";
    cout<<"\nv3 = ";
    for(int i=0;i<3;i++)
        cout<<v3[i]<<" ";
    return 0;
}