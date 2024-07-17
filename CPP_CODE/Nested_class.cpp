#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
        char name[20];
        int roll_no;
        class Address
        {
            private:
                int house_no;
                char street[20];
                char state[20];
                char pincode[7];
                char city[20];
            public:
                void setAddress(int h,char *s,char *st,char *p,char *c)
                {
                    house_no=h;
                    strcpy(street,s);
                    strcpy(state,s);
                    strcpy(pincode,p);
                    strcpy(city,c);
                }
                void showAddress()
                {
                    cout<<"House No. = "<<house_no<<endl;
                    cout<<"Street    = "<<street<<endl;
                    cout<<"Pinecode  = "<<pincode<<endl;
                    cout<<"City      = "<<city<<endl;
                    cout<<"state     = "<<state<<endl;
                }
        };
        Address Add;
    public:
        void setName(char* n)
        {    strcpy(name,n);    }
        void setRollno(int r)
        {   roll_no=r;  }
        void setAddress(int h,char *s,char *st,char *p,char *c)
        {    Add.setAddress(h,s,st,p,c);    }
        void showData()
        {
            cout<<"Name      = "<<name<<endl;
            cout<<"Roll No.  = "<<roll_no<<endl;
            Add.showAddress();
        }
};
int main()
{
    Student s1;
    s1.setName("MR. RITU -R");
    s1.setRollno(40);
    s1.setAddress(205,"JAUKATIYA","BIHAR","845454","BETTIAH");
    s1.showData();
    return 0;
}