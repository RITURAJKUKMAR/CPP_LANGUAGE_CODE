#include<iostream>
#include<fstream>
#include<string.h>  
using namespace std;
class me
{
    private:
        char name[20];
        char ano[15];
        char mno[14];
    public:
        void setdata()
        {
            strcpy(name,"RITURAJ KUMAR");
            strcpy(ano,"2023CSAI205");
            strcpy(mno,"9507091174");
        }
        void show()
        {
            cout<<name<<endl;
            cout<<ano<<endl;
            cout<<mno<<endl;
        }
}r;
fstream f;
int main()
{
    r.setdata();
    r.show();
    f.open("write.txt",ios::out|ios::app);
    f.write((char*)&r,sizeof(me));
    cout<<"ok";
    f.close();
    return 0;
}