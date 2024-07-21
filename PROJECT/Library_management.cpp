// LIBRARY MANAGEMENT //
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<ctime>
using namespace std;
class BOOK
{
    private:
        char bookid[11];
        char booktitle[21];
        float bookprice;
    public:
        BOOK()
        {   strcpy(bookid,"NO ID");  strcpy(booktitle,"NO TITLE");   bookprice=000;  }
        void setbookdata()
        {
            cout<<"\nEnter book ID : ";
            fflush(stdin);
            cin>>bookid;
            cout<<"\nEnter book title : ";
            fflush(stdin);
            gets(booktitle);
            cout<<"\nEnter book price : ";
            fflush(stdin);
            cin>>bookprice;
        }
        void showbook()
        {
            cout<<endl<<bookid<<"    "<<booktitle<<"    "<<bookprice;
        }
        char* bookt()
        {
            return booktitle;
        }
        void deletebook();
        void searchbook();
        void showallbook();
        void creatbook();
        void updatebook();
}B;
class STUDENT
{
    private:
        char addno[15];
        char name[21];
        char mobileno[11];
        char bookname[20];
        int noofbk;
    public:
        STUDENT()
        {   strcpy(addno,"NO No.");  strcpy(name,"NO NAME");   strcpy(mobileno,"NO No.");   strcpy(bookname,"NO BOOK");  noofbk=0;  }
        void setstudent()
        {
            cout<<"\nEnter adimission no. : ";
            fflush(stdin);
            gets(addno);
            cout<<"\nEnter student name : ";
            fflush(stdin);
            gets(name);
            cout<<"\nEnter mobile no. : ";
            fflush(stdin);
            gets(mobileno);
            strcpy(bookname,"NO BOOK");  
            noofbk=0;
        }
        char* nam()
        {   return name;    }
        int noofb()
        {   return noofbk;  }
        void showstudent()
        {
            cout<<endl<<addno<<"          "<<name<<"         "<<mobileno<<"     "<<bookname;
        }
        void setbookt(char* t)
        {
            strcpy(bookname,t);
            noofbk=1;
        }
        void resetbookt()
        {
            strcpy(bookname,"NO BOOK");
            noofbk=0;
        }
        void creatstudent();
        void showallstudent();
        void searchstudent();
        void deletestudent();
        void updatestudent();
        void issubook(BOOK);
        void bookreturn(BOOK);
}S1;
void menu();
void header();
void bookissu();
void bookdetails();
void studentdetails();
void STUDENT::bookreturn(BOOK B1)
{
    int found=0,flag=0;
    fstream fs;
    fstream fb;
    header();
    char n[21],t[21];
    cout<<"\nEnter student name : ";
    fflush(stdin);
    gets(n);
    cout<<"\nEnter book title : ";
    fflush(stdin);
    gets(t);
    fb.open("BOOK.dat",ios::in|ios::binary);
    fb.read((char*)&B1,sizeof(B1));
    while(!fb.eof())
    {
        if(!strcmp(t,B1.bookt()))
        {
            found=1;
            break;
        }
        fb.read((char*)&B1,sizeof(B1));
    }
    if(found==1)
    {
        fs.open("STUDENT.dat",ios::in|ios::out|ios::ate|ios::binary);
        fs.seekg(0);
        fs.read((char*)this,sizeof(*this));
        while(!fs.eof()&&flag==0)
        {
            if(!strcmp(n,S1.nam()))
            {
                flag=1;
                if(S1.noofb()==1)
                {
                    S1.resetbookt();
                    fs.seekp((sizeof(*this)));
                    fs.write((char*)this,sizeof(*this));
                    cout<<"\n\nISSU BOOK RETURN SUCCESSFUL...";
                }
                else
                {
                    header();
                    cout<<"\n\nBOOK NOT ISSUED!";
                    getch();
                    break;
                }
            }
            fs.read((char*)this,sizeof(*this));
        }
        fs.close();
        fb.close();
        if(flag==0)
        {
            header();
            cout<<"\n\nSTUDENT RECORD NOT FOUND!";
        }
    }
    else
    {
        header();
        cout<<"\n\nBOOK RECORD NOT FOUND!";
    }
}
void STUDENT::issubook(BOOK B1)
{
    int found=0,flag=0;
    fstream fs;
    fstream fb;
    header();
    char n[21],t[21];
    cout<<"\nEnter student name : ";
    fflush(stdin);
    gets(n);
    cout<<"\nEnter book title : ";
    fflush(stdin);
    gets(t);
    fb.open("BOOK.dat",ios::in|ios::binary);
    fb.read((char*)&B1,sizeof(B1));
    while(!fb.eof())
    {
        if(!strcmp(t,B1.bookt()))
        {
            found=1;
            break;
        }
        fb.read((char*)&B1,sizeof(B1));
    }
    if(found==1)
    {
        fs.open("STUDENT.dat",ios::in|ios::out|ios::ate|ios::binary);
        fs.seekg(0);
        fs.read((char*)this,sizeof(*this));
        while(!fs.eof()&&flag==0)
        {
            if(!strcmp(n,S1.nam()))
            {
                flag=1;
                if(S1.noofb()==0)
                {
                    S1.setbookt(t);
                    fs.seekp((sizeof(*this)));
                    fs.write((char*)this,sizeof(*this));
                    cout<<"\n\nBOOK ISSU SUCCESSFUL...";
                }
                else
                {
                    header();
                    cout<<"\n\nBOOK ALLREDY ISSU";
                    getch();
                    break;
                }
            }
            fs.read((char*)this,sizeof(*this));
        }
        fs.close();
        fb.close();
        if(flag==0)
        {
            header();
            cout<<"\n\nSTUDENT RECORD NOT FOUND!";
        }
    }
    else
    {
        header();
        cout<<"\n\nBOOK RECORD NOT FOUND!";
    }
}
void STUDENT::updatestudent()
{
    fstream f;
    int flag=0;
    header();
    char c[21];
    cout<<"\nEnter student name : ";
    fflush(stdin);
    gets(c);
    f.open("STUDENT.dat",ios::in|ios::out|ios::ate|ios::binary);
    f.seekg(0);
    f.read((char*)this,sizeof(*this));
    while(!f.eof()&&flag==0)
    {
        if(!strcmp(c,name))
        {
            flag=1;
            header();
            cout<<"\n\nEnter new data...";
            setstudent();
            f.seekp(sizeof(*this));
            f.write((char*)this,sizeof(*this));
        }
        f.read((char*)this,sizeof(*this));
    }
    f.close();
    if(flag==0)
        cout<<"\n\nRecourd not found!";
    else
        cout<<"\n\nUpdated successful...";
}
void BOOK::updatebook()
{
    fstream f;
    int flag=0;
    header();
    char c[21];
    cout<<"\nEnter book title : ";
    fflush(stdin);
    gets(c);
    f.open("BOOK.dat",ios::in|ios::out|ios::ate|ios::binary);
    f.seekg(0);
    f.read((char*)this,sizeof(*this));
    while(!f.eof()&&flag==0)
    {
        if(!strcmp(c,booktitle))
        {
            flag=1;
            header();
            cout<<"\n\nEnter new data...";
            setbookdata();
            f.seekp(sizeof(*this));
            f.write((char*)this,sizeof(*this));
        }
        f.read((char*)this,sizeof(*this));
    }
    f.close();
    if(flag==0)
        cout<<"\n\nRecourd not found!";
    else
        cout<<"\n\nUpdated successful...";
}
void STUDENT::deletestudent()
{
    ifstream fin;
    ofstream fout;
    int f=0;
    header();
    char c[21];
    cout<<"Enter student name : ";
    fflush(stdin);
    gets(c);
    fin.open("STUDENT.dat",ios::in|ios::binary);
    fout.open("temp.dat",ios::app|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if(!strcmp(c,name))
            f=1;
        else
            fout.write((char*)this,sizeof(*this));
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
    fout.close();
    remove("STUDENT.dat");
    rename("temp.dat","STUDENT.dat");
    if(!f)
        cout<<"\n\nRecord not found!";
    else
        cout<<"\n\nDeleted successful...";
}
void BOOK::deletebook()
{
    ifstream fin;
    ofstream fout;
    int f=0;
    header();
    char c[21];
    cout<<"\nEnter book title : ";
    fflush(stdin);
    gets(c);
    fin.open("BOOK.dat",ios::in|ios::binary);
    fout.open("temp.dat",ios::app|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if(!strcmp(c,booktitle))
            f=1;
        else
            fout.write((char*)this,sizeof(*this));
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
    fout.close();
    remove("BOOK.dat");
    rename("temp.dat","BOOK.dat");
    if(!f)
        cout<<"\n\nRecord not found!";
    else
        cout<<"\n\nDeleted successful...";
}
void STUDENT::showallstudent()
{
    header();
    ifstream fin;
    cout<<"ADIMSSION                  NAME            MOBILE No.       ISSU BOOK";
    fin.open("STUDENT.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        showstudent();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}
void BOOK::showallbook()
{
    header();
    ifstream fin;
    cout<<"BOOK ID    BOOK TITLE    BOOK PRICE";
    fin.open("BOOK.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        showbook();
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
}
void STUDENT::searchstudent()
{
    ifstream fin;
    int f=0;
    header();
    char c[20];
    cout<<"Enter student name : ";
    fflush(stdin);
    gets(c);
    fin.open("STUDENT.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if(!strcmpi(c,name))
        {
            header();
            cout<<"ADMISSION         NAME         MOBILE No.     BOOK NAME";
            showstudent();
            f=1;
            break;
        }
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
    if(!f)
        cout<<"\n\nRecord not found!";
}
void BOOK::searchbook()
{
    ifstream fin;
    int f=0;
    header();
    char c[11];
    cout<<"Enter book ID : ";
    fflush(stdin);
    gets(c);
    fin.open("BOOK.dat",ios::in|ios::binary);
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
        if(!strcmp(c,bookid))
        {
            header();
            cout<<"BOOK ID    BOOK TITLE    BOOK PRICE";
            showbook();
            f=1;
            break;
        }
        fin.read((char*)this,sizeof(*this));
    }
    fin.close();
    if(!f)
        cout<<"\n\nRecord not found!";
}
void STUDENT::creatstudent()
{
    ofstream fout;
    header();
    fout.open("STUDENT.dat",ios::out|ios::app|ios::binary);
    S1.setstudent();
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void BOOK::creatbook()
{
    ofstream fout;
    header();
    fout.open("BOOK.dat",ios::out|ios::app|ios::binary);
    B.setbookdata();
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void header()
{
    system("cls");
    cout<<"\n*.*.*.*.*.*.*.*.*.*[LIBRARY MANAGEMENT]*.*.*.*.*.*.*.*.*.*\n\n\n";
}
void bookissu()
{
    while(1)
    {
        header();
        cout<<"\n1. HOME";
        cout<<"\n2. BOOK ISSU";
        cout<<"\n3. ISSU BOOK RETURN";
        cout<<"\n4. EXIT";
        switch(getche())
        {
            case '1':
                menu();
                break;
            case '2':
                S1.issubook(B);
                break;
            case '3':
                S1.bookreturn(B);
                break;
            case '4':
                exit(0);
                break;
            default:
                cout<<"\nInvalid input";
        }
        getch();
    }
}
void studentdetails()
{
    while(1)
    {
        header();
        cout<<"\n1. HOME";
        cout<<"\n2. CREAT NEW STUDENT DETAIL";
        cout<<"\n3. SHOW ALL STUDENTS";
        cout<<"\n4. SEARCH STUDENT";
        cout<<"\n5. DELETE STUDENT DETAIL";
        cout<<"\n6. UPDATE STUDENT DETAILS";
        cout<<"\n7. EXIT";
        cout<<"\n\nEnter your choice!";
        switch(getche())
        {
            case '1':
                menu();
                break;
            case '2':
                S1.creatstudent();
                break;
            case '3':
                S1.showallstudent();
                break;
            case '4':
                S1.searchstudent();
                break;
            case '5':
                S1.deletestudent();
                break;
            case '6':
                S1.updatestudent();
                break;
            case '7':
                exit(0);
                break;
            default:
                cout<<"\nInvalid input";
                break;
        }
        getch();
    }
}
void bookdetails()
{
    while(1)
    {
        header();
        cout<<"\n1. HOME";
        cout<<"\n2. CREAT NEW BOOK";
        cout<<"\n3. SHOW ALL BOOK BOOK";
        cout<<"\n4. SEARCH BOOK";
        cout<<"\n5. DELETE BOOK";
        cout<<"\n6. UPDATE BOOK DETAILS";
        cout<<"\n7. EXIT";
        cout<<"\n\nEnter your choice!";
        switch(getche())
        {
            case '1':
                menu();
                break;
            case '2':
                B.creatbook();
                break;
            case '3':
                B.showallbook();
                break;
            case '4':
                B.searchbook();
                break;
            case '5':
                B.deletebook();
                break;
            case '6':
                B.updatebook();
                break;
            case '7':
                exit(0);
                break;
            default:
                cout<<"\n\nInvalid input";
                break;
        }
        getch();
    }
}
void menu()
{
    while(1)
    {
        header();
        cout<<"\n1. BOOK ISSU";
        cout<<"\n2. STUDENTS DETAILS MANAGE";
        cout<<"\n3. BOOK DETAILS MANAGE";
        cout<<"\n4. EXIT";
        cout<<"\n\nEnter your choice! ";
        switch(getche())
        {
            case '1':
                bookissu();
                break;
            case '2':
                studentdetails();
                break;
            case '3':
                bookdetails();
                break;
            case '4':
                exit(0);
            default:
                cout<<"\n\nInvalid input";
                break;
        }
        getch();
    }
}
int main()
{
    menu();
    return 0;
}