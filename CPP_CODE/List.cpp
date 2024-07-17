#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    list <int>l2 {54,64,33,76,24,56,98};
    list<string>l3 {"india","kathmandu","RITURAJ KUMAR","MR.RITU-R"};
    list<int>::iterator p=l2.begin();
    cout<<"Elements of l2 = ";
    while(p!=l2.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;

    cout<<"total values inthe list(l2) are "<<l2.size();

    l2.push_back(44);
    l2.push_front(00);
    list<int>::iterator q=l2.begin();
    cout<<"\nElements of l2 = ";
    while(q!=l2.end())
    {
        cout<<*q<<" ";
        q++;
    }
    cout<<endl;

    l2.pop_back();
    l2.pop_front();
    list<int>::iterator r=l2.begin();
    cout<<"\nElements of l2 = ";
    while(r!=l2.end())
    {
        cout<<*r<<" ";
        r++;
    }
    cout<<endl;

    l2.sort();
    list<int>::iterator m=l2.begin();
    cout<<"\nElements of l2 = ";
    while(m!=l2.end())
    {
        cout<<*m<<" ";
        m++;
    }
    cout<<endl;

    l2.reverse();
    list<int>::iterator k=l2.begin();
    cout<<"\nElements of l2 = ";
    while(k!=l2.end())
    {
        cout<<*k<<" ";
        k++;
    }
    cout<<endl;

    l2.remove(64);
    list<int>::iterator l=l2.begin();
    cout<<"\nElements of l2 = ";
    while(l!=l2.end())
    {
        cout<<*l<<" ";
        l++;
    }
    cout<<endl;

    l2.clear();
    list<int>::iterator n=l2.begin();
    cout<<"\nElements of l2 = ";
    while(n!=l2.end())
    {
        cout<<*n<<" ";
        n++;
    }
    cout<<endl;
}