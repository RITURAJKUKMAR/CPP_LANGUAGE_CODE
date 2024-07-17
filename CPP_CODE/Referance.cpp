#include<iostream>
using namespace std;
void print(int &y)
{
    //y=19;
    cout<<y<<endl;
    y=78;
}
int main()
{
    int x=98;
    cout<<x<<endl;
    print(x);
    cout<<x;
    return 0;
}