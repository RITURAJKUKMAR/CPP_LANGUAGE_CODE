#include<iostream>
#include<conio.h>
using namespace std;
class COMPLEX
{
    private:
        int a,b;
    public:
        COMPLEX(int x,int y)    //for c
        { a=x; b=y;}
        COMPLEX(int x)  //for c1
        { a=x;}
        COMPLEX()     //DEFAULT CONSTRUCTOR    //for c2
        { cout<<"MR.RIUT-R";}
        COMPLEX(COMPLEX &c)     //copy constructor  (c4=c1)
        {
            a=c.a;
            b=c.b;
        }
        ~COMPLEX()      //Destructor  //auto run for distroy object
        { cout<<endl<<"DISTROY";}
};
void fun()
{
    cout<<endl<<"RITURAJ KUMAR";
}
int main()
{
    COMPLEX c(2,4)/*c=COMPLEX(2,4)*/,c1(10)/*c1=10*/,c2;
    COMPLEX c4(c1);
    fun();
    cout<<endl<<"Press Enter."<<endl<<"    !";
    getch();
    return 0;
}