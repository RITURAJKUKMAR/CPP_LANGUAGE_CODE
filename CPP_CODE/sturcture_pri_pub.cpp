#include<iostream>
#include<conio.h>
using namespace std;
struct EMPLOYEE
{
    private:
        int code;
        char name[20];
        float salary;
    public:
        void ENTER()
        {
            cout<<"Enter empotyee name ,code and salary"<<endl;
            cin>>name>>code>>salary;
            if(code<0)
                code=-code;
        }
        void PRINT()
        {
            cout<<"Empolyee name= "<<name<<", code= "<<code<<", salary"<<salary<<endl;
        }
};
int main()
{
    EMPLOYEE e1,e2;
    e1.ENTER();
    e2.ENTER();
    e1.PRINT();
    e2.PRINT();
}