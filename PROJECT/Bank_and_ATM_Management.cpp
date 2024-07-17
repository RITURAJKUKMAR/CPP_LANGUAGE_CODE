//  BANK MANAGEMENT & ATM MANAGEMENT //
#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int i=1;
int main();
void Bank();
void Home();
class BANK
{
    private:
        int ACCOUNT[10];
        double AMOUNT=0;
        char ADDRESS[20]={'\0'};
        char DOB[11]={'\0'};
        char MOBILE[11]={'\0'};
        char NAME[20]={'\0'};
        char AADHAR[13]={'\0'};
        char DATE[24];
    public:
        void WithDraw()
        {
            double w;
            system("cls");
            cout<<"[MRR BANK]\n\n";
            cout<<"Enter your amounts for withdraw\n";
            cout<<"MONEY : ";
            cin>>w;
            AMOUNT=AMOUNT-w;
            cout<<"\nWithdraw successful......\n";
            getch();
        }
        void EDIT()
        {
            system("cls");
            cout<<"[MRR BANK]\n\n";
            cout<<"Whate do you want to change?\n\n";
            cout<<"1. -> NAME\n";
            cout<<"2. -> MOBILE No.\n";
            cout<<"3. -> DATE OF BIRTH\n";
            cout<<"4. -> ADDRESS\n";
            cout<<"5. -> AADHAR No.\n";
            switch(getch())
            {
                case '1':
                    cout<<"NAME : "<<NAME<<endl;
                    cout<<"ENTER NEW NAME : ";
                    fflush(stdin);
                    gets(NAME);
                    break;
                case '2':
                    cout<<"MOBILE : "<<MOBILE<<endl;
                    cout<<"ENTER NEW MOBILE : ";
                    fflush(stdin);
                    gets(MOBILE);
                    break;
                case '3':
                    cout<<"DATE OF BIRTH : "<<DOB<<endl;
                    cout<<"ENTER NEW DOB : ";
                    fflush(stdin);
                    gets(DOB);
                    break;
                case '4':
                    cout<<"ADDRESS : "<<ADDRESS<<endl;
                    cout<<"ENTER NEW ADDRESS : ";
                    fflush(stdin);
                    gets(ADDRESS);
                    break;
                case '5':
                    cout<<"AADHAR No. : "<<AADHAR<<endl;
                    cout<<"ENTER NEW AADHAR : ";
                    fflush(stdin);
                    gets(AADHAR);
                    break;
            }
            cout<<"\nDo you want to change something else? [y/n]\n";
            char c=getch();
            if('y'==c||'Y'==c)
                EDIT();
        }
        void Depos()
        {
            double amo;
            system("cls");
            cout<<"[MRR BANK]\n\n";
            cout<<"Enter your amounts\n";
            cout<<"MONEY : ";
            cin>>amo;
            AMOUNT=AMOUNT+amo;
            TIME();
            cout<<"\nDopositing money was successful......\n";
        }
        void remove()
        {
            for(int n=0;n<10;n++)
                ACCOUNT[n]=0;
            AMOUNT=0;
            ADDRESS[20]={'\0'};
            DOB[11]={'\0'};
            MOBILE[11]={'\0'};
            strcpy(NAME,"THIS IS DELETE");
            AADHAR[13]={'\0'};
            DATE[24]={'\0'};
            system("cls");
            cout<<"[MRR BANK]\n\n";
            cout<<"\nDelete successful......\n";
            getch();
        }
        void transfer()
        {
            double aa;
            system("cls");
            cout<<"[MRR BANK]\n\n";
            cout<<"Enter another account no.\n";
            cout<<"ANOTHER ACCOUNT No. : ";
            cin>>aa;
            cout<<"Enter your amounts\n";
            cout<<"MONEY : ";
            cin>>aa;
            AMOUNT=AMOUNT-aa;
            cout<<"Transfer successful......\n";
            getch();
        }
        void TIME()
        {
            time_t t=time(NULL);
            char* a=ctime(&t);
            strcpy(DATE,a);
        }
        void Detail()
        {
            system("cls");
            cout<<"[MRR BANK]\n\n\n";
            cout<<"------------------------------------------------------------------------\n";
            cout<<"NAME : "<<NAME<<",\tMOBILE : "<<MOBILE<<endl<<endl;
            cout<<"ACCOUNT No. : ";
            for(int l=0;l<10;l++)
                cout<<ACCOUNT[l];
            cout<<",\tDATE OF BIRTH : "<<DOB<<endl<<endl;
            cout<<"ADDRESS : "<<ADDRESS<<",\tAADHAR No. : "<<AADHAR<<endl<<endl;
            cout<<"AMOUNTs : "<<AMOUNT<<",\tDATE : "<<DATE;
            cout<<"\n________________________________________________________________________\n";
        }
        int CHECK(int* acc)
        {
            int a=0;
            for(int h=0;h<10;h++)
            {
                if(ACCOUNT[h]==*(acc+h))
                    a=1;
                else
                {
                    a=0;
                    break;
                }
            }
            return a;
        }
        void Ano()
        {
            ACCOUNT[0]=1;
            ACCOUNT[1]=8;
            ACCOUNT[2]=1;
            ACCOUNT[3]=1;
            srand(time(NULL));
            for(int i=4;i<10;i++)
                ACCOUNT[i]=rand()%10;
        }
        void Show(int k)
        {
            cout<<"USER "<<k<<"\n\n";
            cout<<"NAME : "<<NAME<<",\tMOBILE No. : "<<MOBILE<<",\tACCOUNT No. : ";
            for(int r=0;r<10;r++)
                cout<<ACCOUNT[r];
            if(k==0)
            {
                system("cls");
                cout<<"[MRR BANK]\n";
            }
            cout<<endl<<endl<<endl;
        }
        void Creat()
        {
            system("cls");
            cout<<"[MRR BANK]\n\n";
            cout<<"\nWhat's your name?\n";
            cout<<"NAME : ";
            fflush(stdin);
            gets(NAME);
            cout<<"\nWhat's your mobile number?\n";
            cout<<"MOBILE No. : ";
            fflush(stdin);
            gets(MOBILE);
            cout<<"\nWhat's your date of birth?\n";
            cout<<"DOB : ";
            fflush(stdin);
            gets(DOB);
            cout<<"\nWhat's your address?\n";
            cout<<"ADDRESS : ";
            fflush(stdin);
            gets(ADDRESS);
            cout<<"\nWhat's your aadhar number?\n";
            cout<<"AADHAR No. : ";
            fflush(stdin);
            gets(AADHAR);
            TIME();
            Ano();
            if(AADHAR!='\0'&&MOBILE!='\0'&&ACCOUNT!='\0')
                cout<<"\nYour account is created successfully......\n";
            else
                cout<<"Something went wrong !\n";
            getch();
        }
}B[100];
int verify(int);
void Delete(int K)
{
    int r;
    r=verify(K);
    B[r].remove();
}
void Transfer(int K)
{
    int r;
    r=verify(K);
    B[r].transfer();
}
void Withdraw(int K)
{
    int r;
    r=verify(K);
    B[r].WithDraw();
}
int verify(int K)
{
    char c[11]={'\0'};
    int n[11];
    system("cls");
    cout<<"[MRR BANK]\n\n";
    cout<<"What's your account number?\n";
    cout<<"ACCOUNT : ";
    fflush(stdin);
    gets(c);
    for(int i=0;i<10;i++)
    {
        if(c[i]=='0')
            n[i]=0;
        else if(c[i]=='1')
            n[i]=1;
        else if(c[i]=='2')
            n[i]=2;
        else if(c[i]=='3')
            n[i]=3;
        else if(c[i]=='4')
            n[i]=4;
        else if(c[i]=='5')
            n[i]=5;
        else if(c[i]=='6')
            n[i]=6;
        else if(c[i]=='7')
            n[i]=7;
        else if(c[i]=='8')
            n[i]=8;
        else if(c[i]=='9')
            n[i]=9;
    }
    for(int r=0;r<K;r++)
    {
        if(B[r].CHECK(n))
        {
            return r;
        }
        else
        {
            cout<<"Account not matched !\n";
        }
    }
    getch();
}
void Edit(int K)
{
    int r;
    r=verify(K);
    B[r].EDIT();
}
void Deposit(int K)
{
    int r;
    r=verify(K);
    B[r].Depos();
    getch();
}
void Details(int K)
{
    int r;
    r=verify(K);
    B[r].Detail();
    getch();
}
void Showall(int k)
{
    system("cls");
    cout<<"[MRR BANK]\n\n";
    for(int j=0;j<k;j++)
        B[j].Show(j);
    getch();
}
void Atm()
{
    system("cls");
    cout<<"[MRR ATM]\n\n";
    getch();
}
void Bank()
{
    while(1)
    {
        system("cls");
        cout<<"[MRR BANK]\n\n";
        cout<<"0. -> GO TO HOME\n";
        cout<<"1. -> CREAT NEW ACCOUT\n";
        cout<<"2. -> DETAILs USER\n";
        cout<<"3. -> DEPOSIT AMOUNTs\n";
        cout<<"4. -> WITHDRAW AMOUNTs\n";
        cout<<"5. -> TRANSFER AMOUNTs\n";
        cout<<"6. -> SEARCH USERs\n";
        cout<<"7. -> CHANGE DETAILs\n";
        cout<<"8. -> DELETE USERs\n";
        cout<<"9. -> SHOW ALL ACCOUNTs\n";
        cout<<"E. -> EXIT\n";
        switch(getch())
        {
            case '0':
                Home();
                break;
            case '1':
                B[i++].Creat();
                break;
            case '2':
                Details(i);
                break;
            case '3':
                Deposit(i);
                break;
            case '4':
                Withdraw(i);
                break;
            case '5':
                Transfer(i);
                break;
            case '6':
                Details(i);
                break;
            case '7':
                Edit(i);
                break;
            case '8':
                Delete(i);
                break;
            case '9':
                Showall(i);
                break;
            case 'E':
            case 'e':
                cout<<"Do you want exit [y/n]\n";
                char c=getch();
                if('y'==c||'Y'==c)
                    exit(1);
                else if('n'==c||'N'==c)
                    Bank();
        }
    }
}
void Home()
{
    system("cls");
    cout<<"[MRR BANK]\n\n";
    cout<<"1. -> BANK MANAGEMENT\n";
    cout<<"2. -> ATM MANAGEMENT\n";
    cout<<"3. -> EXIT\n";
    switch(getch())
    {
        case '1':
            Bank();
            break;
        case '2':
            Atm();
            break;
        case '3':
            cout<<"Do you want exit [y/n]\n";
            char c=getch();
            if('y'==c||'Y'==c)
                exit(1);
            else if('n'==c||'N'==c)
                main();
    }
}
int main()
{
    while(1)
    Home();
    return 0;
}