#include<iostream>
using namespace std;
template<class x> class array
{
    private:
        struct controlblock
        {
            int capacity;
            x *arr;
        };
        controlblock *s;
    public:
        array(int capacity)
        {
            s=new controlblock;
            s->capacity=capacity;
            s->arr=new x[s->capacity];
        }
        void add_elements(int a,x data)
        {
            if(a>=0&&a<=s->capacity-1)
                *(s->arr+a)=data;  //s->arr[a]=data;
            else
                cout<<"\nInvalid index";
        }
        void show_elements(int a)
        {
            if(a>=0&&a<=s->capacity-1)
                cout<<"\nIndex no. = "<<a<<" ,Elements = "<<*(s->arr+a)<<endl;
            else
                cout<<"Invalid index"<<endl;
        }
        void listelements()
        {
            cout<<"Elements are = ";
            for(int i=0;i<s->capacity;i++)
                cout<<*(s->arr+i)<<",";
        }
        ~array()
        {
            delete s->arr;
            delete s;
        }
};
int main()
{
    array <double>a1=(4);
    array <int>a2=(4);
    a1.add_elements(0,5.8);
    a1.add_elements(1,5.25);
    a1.add_elements(2,8.9);
    a1.add_elements(3,2.3);
    a1.show_elements(2);
    a1.listelements();
    a1.add_elements(0,58);
    a1.add_elements(1,525);
    a1.add_elements(2,89);
    a1.add_elements(3,23);
    a1.show_elements(2);
    a1.listelements();
    return 0;
}