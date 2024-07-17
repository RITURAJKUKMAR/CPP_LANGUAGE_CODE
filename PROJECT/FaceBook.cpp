//..................FACEBOOK LOG IN PAGE..................
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fstream>
#include<time.h>
using namespace std;
char e2[30],p2[20],gender[10],fn[30],sn[30],e1[30],dob[10],p1[20],m1[10],m2[10];
int OTP();
void HOME();
void forget();
void Edit();
void Show();
void showdetails();
void setdetails();
void create(int);
void Delete();
void logout();
void logout()
{
    setdetails();
    system("cls");
    strcpy(gender,"   "),strcpy(fn,"   "),strcpy(sn,"   "),strcpy(e1,"   "),strcpy(dob,"   "),strcpy(p1,"   "),strcpy(e2,"   "),strcpy(p2,"   "),strcpy(m1,"   "),strcpy(m2,"   ");
    cout<<"Log uot account successful ";
    sleep(2);
    system("cls");
}
void setdetails()
{
    ofstream fout;
    fout.open("Facebook.dat");
    fout<<fn<<"\n";
    fout<<sn<<"\n";
    fout<<dob<<"\n";
    fout<<gender<<"\n";
    fout<<m1<<"\n";
    fout<<e1<<"\n";
    fout<<p1<<"\n";
    fout.close();
}
void showdetails()
{
    int i=0;
    char c;
    ifstream fin;
    fin.open("Facebook.dat");
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            fn[i]=c;
        else
            break;
    }
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            sn[i]=c;
        else
            break;
    }
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            dob[i]=c;
        else
            break;
    }
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            gender[i]=c;
        else
            break;
    }
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            m1[i]=c;
        else
            break;
    }
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            e1[i]=c;
        else
            break;
    }
    for(int i=0;!fin.eof();i++)
    {
        c=fin.get();
        if(c!='\n')
            p1[i]=c;
        else
            break;
    }
    fin.close();
}
int equal(char a[30],char b[30])
{
    int f=1;
    for(int i=0;i<30;i++)
    {
        if(a[i]==b[i])
            f++;
        else
            f--;
    }
    if(f>9)
        return 1;
    else
        return 0;
}
void Setting()
{
    system("cls");
    cout<<"1.   Edit your profile."<<endl;
    cout<<"2.   Show account details."<<endl;
    cout<<"3.   Forgotten password."<<endl;
    cout<<"4.   Delete your account."<<endl;
    cout<<"5.   Log out your account."<<endl;
    cout<<"6.   Home"<<endl;
    switch(getch())
    {
        case '1': Edit();
        break;
        case '2': Show();
        break;
        case '3': forget();
        break;
        case '4': Delete();
        break;
        case '5': logout();
        break;
        case '6': Setting();
        break;
    }
}
void Show()
{
    showdetails();
    system("cls");
    cout<<"\t\t\t1.   [SETTING]"<<endl<<endl;
    cout<<"Full name     = "<<fn<<" "<<sn<<endl;
    cout<<"Date of birth = "<<dob<<endl;
    cout<<"Gender        = "<<gender<<endl;
    cout<<"Mobile number = "<<m1<<endl;
    cout<<"Gmail (Email) = "<<e1<<endl;
    switch(getch())
    {
        case '1': Setting();
    }
}
void create(int x=0)
{
    int otp1,otp2;
    system("cls");
    if(x==0)
    {
        cout<<"Whate's your name?"<<endl;
        cout<<"First name : ";
        fflush(stdin);
        gets(fn);
        cout<<"Surname : ";
        fflush(stdin);
        gets(sn);
        system("cls");
        cout<<"What's your date of birth?"<<endl;
        cout<<"Date of birth : ";
        fflush(stdin);
        gets(dob);
        system("cls");
        cout<<"What's your gender?"<<endl;
        cout<<"1. Male"<<endl<<"2. Female"<<endl;
        switch(getch())
        {
            case '1': strcpy(gender,"Male");
            break;
            case '2': strcpy(gender,"Female");
            break;
        }
        r2:
        system("cls");
        cout<<"What's your mobile number?"<<endl;
        cout<<"Mobile : ";
        fflush(stdin);
        cin>>m1;
        otp1=OTP();
        cout<<otp1<<" is your facebook code."<<endl;
        cout<<"Enter OTP : ";
        fflush(stdin);
        cin>>otp2;
        if(otp1==otp2)
        {
            system("cls");
            cout<<"OTP Verified ";
            sleep(2);
            system("cls");
        }
        else
        {
            cout<<"OTP does not match. ";
            sleep(2);
            system("cls");
            goto r2;
        }
        cout<<"What's your email address?"<<endl;
        cout<<"Email : ";
        fflush(stdin);
        cin>>e1;
        system("cls");
        cout<<"Create a password"<<endl;
        cout<<"1. Show password"<<endl<<"2. Hide password"<<endl;
        switch(getch())
        {
            case '1':
                system("cls");
                cout<<"Password : ";
                fflush(stdin);
                gets(p1);
                break;
            case '2':
                system("cls");
                cout<<"Password (Only 15 Digit): ";
                for(int i=0;i<15;i++)
                {
                    fflush(stdin);
                    p1[i]=getch();
                    cout<<"*";
                }
                break;
        }
        system("cls");
        cout<<"Created password successful ";
        sleep(2);
        system("cls");
    }
    if(x==1)
        Show();
    setdetails();
}
void account()
{
    system("cls");
    cout<<"Account created successfully."<<endl;
    sleep(3);
    system("cls");
    cout<<"LOADING.";
    for(int j=0;j<5;j++)
    {
        cout<<".";
        sleep(1);
    }
    Show();
}
int OTP()
{
    int otp=0;
    srand(time(NULL));
    for(int i=0;i<6;i++)
        otp=otp*10+rand()%10;
    return otp;
}
void login()
{
    showdetails();
    int f=0,k=0,l=0;
    r1:
    system("cls");
    cout<<"Mobile number or email address"<<endl;
    cout<<"1.   Mobile"<<endl<<"2.   Email"<<endl<<"3.   Home"<<endl;
    f=getch();
    switch(f)
    {
        case '1':
            system("cls");
            cout<<"Mobile : ";
            fflush(stdin);
            cin>>m2;
            break;
        case '2':
            system("cls");
            cout<<"Email : ";
            fflush(stdin);
            gets(e2);
            break;
        case '3':
            HOME();
    }
    system("cls");
    cout<<"Password : ";
    fflush(stdin);
    gets(p2);
    if((equal(m1,m2)!=1&&equal(p1,p2)!=1)||(equal(e1,e2)!=1&&equal(p1,p2)!=1))
    {
        switch(f)
        {
            case '1':
                if(equal(m1,m2)!=1)
                {
                    cout<<"Invalid Mobile number";
                    sleep(2);
                    system("cls");
                    goto r1;
                }
                break;
            case '2':
                if(equal(e1,e2)!=1)
                {
                    cout<<"Invalid email address";
                    sleep(2);
                    system("cls");
                    goto r1;
                }
                break;
        }
        if(equal(p1,p2)!=1)
        {
            cout<<"Invalid password";
            sleep(2);
            system("cls");
            goto r1;
        }
    }
    else if(((m1[0]==m2[0]&&m1[1]==m2[1]&&m1[2]==m2[2]&&m1[3]==m2[3]&&m1[4]==m2[4]&&m1[5]==m2[5]&&m1[6]==m2[6]&&m1[7]==m2[7]&&m1[8]==m2[8]&&m1[9]==m2[9])&&(p1[0]==p2[0]&&p1[1]==p2[1]&&p1[2]==p2[2]&&p1[3]==p2[3]&&p1[4]==p2[4]&&p1[5]==p2[5]&&p1[6]==p2[6]&&p1[7]==p2[7]&&p1[8]==p2[8]&&p1[9]==p2[9]&&p1[10]==p2[10]&&p1[11]==p2[11]&&p1[12]==p2[12]&&p1[13]==p2[13]&&p1[14]==p2[14]&&p1[15]==p2[15]&&p1[16]==p2[16]&&p1[17]==p2[17]&&p1[18]==p2[18]&&p1[19]==p2[19]))||((e1[0]==e2[0]&&e1[1]==e2[1]&&e1[2]==e2[2]&&e1[3]==e2[3]&&e1[4]==e2[4]&&e1[5]==e2[5]&&e1[6]==e2[6]&&e1[7]==e2[7]&&e1[8]==e2[8]&&e1[9]==e2[9]&&e1[10]==e2[10]&&e1[11]==e2[11]&&e1[12]==e2[12]&&e1[13]==e2[13]&&e1[14]==e2[14]&&e1[15]==e2[15]&&e1[16]==e2[16]&&e1[17]==e2[17]&&e1[18]==e2[18]&&e1[19]==e2[19]&&e1[20]==e2[20]&&e1[21]==e2[21]&&e1[22]==e2[22]&&e1[23]==e2[23]&&e1[24]==e2[24]&&e1[25]==e2[25]&&e1[26]==e2[26]&&e1[27]==e2[27]&&e1[28]==e2[28]&&e1[29]==e2[29])&&(p1[0]==p2[0]&&p1[1]==p2[1]&&p1[2]==p2[2]&&p1[3]==p2[3]&&p1[4]==p2[4]&&p1[5]==p2[5]&&p1[6]==p2[6]&&p1[7]==p2[7]&&p1[8]==p2[8]&&p1[9]==p2[9]&&p1[10]==p2[10]&&p1[11]==p2[11]&&p1[12]==p2[12]&&p1[13]==p2[13]&&p1[14]==p2[14]&&p1[15]==p2[15]&&p1[16]==p2[16]&&p1[17]==p2[17]&&p1[18]==p2[18]&&p1[19]==p2[19])))
    {
        system("cls");
        cout<<"\n\n\n\t\tLOADING.";
        for(int j=0;j<5;j++)
        {
            cout<<".";
            sleep(1);
        }
        Show();
    }
    else
    {
        cout<<"Invalid Mobile number or email address"<<endl;
        cout<<"Invalid password";
        sleep(2);
        system("cls");
        goto r1;
    }
}
void forget()
{
    showdetails();
    int otp1,otp2,f=0;
    r2:
    system("cls");
    cout<<"Mobile number or email address"<<endl;
    cout<<"1.   Mobile"<<endl<<"2.   Email"<<endl<<"3.   Home"<<endl;
    switch(getch())
    {
        case '1':
            system("cls");
            cout<<"Mobile : ";
            fflush(stdin);
            cin>>m2;
            break;
        case '2':
            system("cls");
            cout<<"Email : ";
            fflush(stdin);
            gets(e2);
            break;
        case '3':
            HOME();
    }
    if((m1[0]==m2[0]&&m1[1]==m2[1]&&m1[2]==m2[2]&&m1[3]==m2[3]&&m1[4]==m2[4]&&m1[5]==m2[5]&&m1[6]==m2[6]&&m1[7]==m2[7]&&m1[8]==m2[8]&&m1[9]==m2[9])&&(e1[0]==e2[0]&&e1[1]==e2[1]&&e1[2]==e2[2]&&e1[3]==e2[3]&&e1[4]==e2[4]&&e1[5]==e2[5]&&e1[6]==e2[6]&&e1[7]==e2[7]&&e1[8]==e2[8]&&e1[9]==e2[9]&&e1[10]==e2[10]&&e1[11]==e2[11]&&e1[12]==e2[12]&&e1[13]==e2[13]&&e1[14]==e2[14]&&e1[15]==e2[15]&&e1[16]==e2[16]&&e1[17]==e2[17]&&e1[18]==e2[18]&&e1[19]==e2[19]&&e1[20]==e2[20]&&e1[21]==e2[21]&&e1[22]==e2[22]&&e1[23]==e2[23]&&e1[24]==e2[24]&&e1[25]==e2[25]&&e1[26]==e2[26]&&e1[27]==e2[27]&&e1[28]==e2[28]&&e1[29]==e2[29]))
    {
        otp1=OTP();
        cout<<otp1<<" is your facebook code."<<endl;
    }
    else if(equal(m1,m2)==0)
    {
        cout<<"Invalid Mobile number or email address"<<endl;
        sleep(2);
        system("cls");
        goto r2;
    }
    cout<<"Enter OTP : ";
    fflush(stdin);
    cin>>otp2;
    if(otp1==otp2)
    {
        system("cls");
        cout<<"\nVerified OTP ";
        sleep(2);
        system("cls");
        cout<<"Create a new password"<<endl;
        cout<<"1. Show password"<<endl<<"2. Hide password"<<endl;
        switch(getch())
        {
            case '1':
                system("cls");
                cout<<"Password : ";
                fflush(stdin);
                gets(p1);
                break;
            case '2':
                system("cls");
                cout<<"Password (Only 15 Digit): ";
                for(int i=0;i<15;i++)
                {
                    fflush(stdin);
                    p1[i]=getch();
                    cout<<"*";
                }
                break;
        }
        system("cls");
        cout<<"Created new password successful ";
        sleep(2);
        system("cls");
    }
    else
    {
        cout<<"OTP does not match. ";
        sleep(2);
        system("cls");
        goto r2;
    }
    setdetails();
}
void Delete()
{
    system("cls");
    strcpy(gender,"   "),strcpy(fn,"   "),strcpy(sn,"   "),strcpy(e1,"   "),strcpy(dob,"   "),strcpy(p1,"   "),strcpy(e2,"   "),strcpy(p2,"   "),strcpy(m1,"   "),strcpy(m2,"   ");
    cout<<"Delete account successful"<<endl;
    sleep(2);
    system("cls");
    ofstream fout;
    fout.open("Facebook.dat");
    fout<<"\n";
    fout<<"\n";
    fout<<"\n";
    fout<<"\n";
    fout<<"\n";
    fout<<"\n";
    fout<<"\n";
    fout.close();
}
void Edit()
{
    system("cls");
    cout<<"*****EDIT PROFILE*****"<<endl;
    cout<<"1.   Edit first name"<<endl;
    cout<<"2.   Edit surname"<<endl;
    cout<<"3.   Edit mobile number"<<endl;
    cout<<"4.   Edit gmail"<<endl;
    cout<<"5.   Edit gender"<<endl;
    cout<<"6.   Edit date of birth"<<endl;
    cout<<"7.   Home"<<endl;
    cout<<"\n\t\tEnter your choice. NO : ";
    switch(getch())
    {
        case '1':
            system("cls");
            cout<<"Full name     = "<<fn<<" "<<sn<<endl;
            cout<<"Whate's your new first name?"<<endl;
            cout<<"First name : ";
            fflush(stdin);
            gets(fn);
            Edit();
            break;
        case '2':
            system("cls");
            cout<<"Full name     = "<<fn<<" "<<sn<<endl;
            cout<<"Whate's your new surname name?"<<endl;
            cout<<"Surname : ";
            fflush(stdin);
            gets(sn);
            Edit();
            break;
        case '6':
            system("cls");
            cout<<"Date of birth = "<<dob<<endl;
            cout<<"What's your new date of birth?"<<endl;
            cout<<"Date of birth : ";
            fflush(stdin);
            gets(dob);
            Edit();
            break;
        case '5':
            system("cls");
            cout<<"Gender        = "<<gender<<endl;
            cout<<"What's your gender?"<<endl;
            cout<<"1. Male"<<endl<<"2. Female"<<endl;
            switch(getch())
            {
                case '1': strcpy(gender,"Male");
                Edit();
                break;
                case '2': strcpy(gender,"Female");
                Edit();
                break;
            }
            break;
        case '3':
            system("cls");
            cout<<"Mobile number = "<<m1<<endl;
            cout<<"What's your new mobile number?"<<endl;
            cout<<"Mobile : ";
            fflush(stdin);
            cin>>m1;
            Edit();
            break;
        case '4':
            system("cls");
            cout<<"Gmail (Email) = "<<e1<<endl;
            cout<<"What's your new gemail?"<<endl;
            cout<<"Email : ";
            fflush(stdin);
            gets(e1);
            Edit();
            break;
        case '7':
            setdetails();
            Show();
            break;
    }
    setdetails();
}
void HOME()
{
    system("cls");
    int x;
    cout<<"..................FACEBOOK LOG IN PAGE.................."<<endl;
    cout<<"1.   Log in account."<<endl;
    cout<<"2.   Creat your account."<<endl;
    cout<<"3.   Forgotten password."<<endl;
    cout<<"4.   Exit"<<endl;
    cout<<"\n\t\tEnter your choice.\n\t\t       NO : ";
    switch(getch())
    {
        case '1': login();
        break;
        case '2': create();
        break;
        case '3': forget();
        break;
        case '4': exit(1);
        break;
    }
}
int main()
{
    while(1)
    HOME();
    return 0;
}