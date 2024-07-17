//   |.*.*.*.[DIGITAL  WATCH].*.*.*.|
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<ctime>
#include<conio.h>
#include<time.h>
using namespace std;
class WATCH
{
    private:
        char DAY[5]={'\0'};
        char MONTH[5]={'\0'};
        int DATE,YEAR,I;
        char d[3]={'\0'};
        char t[12]={'\0'};
        char y[12]={'\0'};
        struct TIME
        {
            int H,M,S;
        }T,A,S;
    public:
        void SetAlarm(int i)
        {
            if(i==0)
            {    A.H=0;  A.M=0;  A.S=0;     }
            else if(i==1)
            {
                system("cls");
                cout<<"[S] -> STOP ALARM"<<endl;
                cout<<"\tSET ALARM TIME (00:00:00)\n";
                cout<<"HOUR -> : ";
                cin>>A.H;
                cout<<"MINUTE -> : ";
                cin>>A.M;
                cout<<"SECOND -> : ";
                cin>>A.S;
                I=I+5;
            }
        }
        void SetTime()
        {
            system("cls");
            cout<<"\tSET TIME (00:00:00)\n";
            cout<<"HOUR -> : ";
            cin>>T.H;
            cout<<"MINUTE -> : ";
            cin>>T.M;
            cout<<"SECOND -> : ";
            cin>>I;
        }
        void ALARM()
        {
            for(int i=0;i<600;i++)
            {
                if(kbhit())
                {
                    cout<<"\n\tSTOP ALARM";
                    break;
                }
                I++;
                sleep(1);
                cout<<"\tRINGING ALARM\t";
            }
        }
        void SetTimer()
        {
            int i;
            system("cls");
            cout<<"\tSET TIME (00:00:00)\n";
            cout<<"HOUR -> : ";
            cin>>S.H;
            S.H++;
            cout<<"MINUTE -> : ";
            cin>>S.M;
            S.M++;
            cout<<"SECOND -> : ";
            cin>>i;
            i++;
            I=I+5;
            cout<<"\n[ENTER] START TIMER\n";
            while(S.H!=0&&S.M!=0&&i!=0)
            {
                system("cls");
                cout<<"|.*.*.*.*.[STOP WATCH].*.*.*.*.|\n\n";
                cout<<"|------------------------------|"<<endl;
                if(S.H<10||S.M<10||i<10)
                {
                    if(S.H<10&&S.M<10&&i<10)
                        cout<<"|        TIME :- 0"<<S.H<<":0"<<S.M<<":0"<<i<<"      |"<<endl;
                    else if(S.H<10&&i<10)
                        cout<<"|        TIME :- 0"<<S.H<<":"<<S.M<<":0"<<i<<"      |"<<endl;
                    else if(S.H<10&&S.M<10)
                        cout<<"|        TIME :- 0"<<S.H<<":0"<<S.M<<":"<<i<<"      |"<<endl;
                    else if(S.M<10&&i<10)
                        cout<<"|        TIME :- "<<S.H<<":0"<<S.M<<":0"<<i<<"      |"<<endl;
                    else if(S.H<10)
                        cout<<"|        TIME :- 0"<<S.H<<":"<<S.M<<":"<<i<<"      |"<<endl;
                    else if(S.M<10)
                        cout<<"|       TIME :- "<<S.H<<":0"<<S.M<<":"<<i<<"       |"<<endl;
                    else if(i<10)
                        cout<<"|       TIME :- "<<S.H<<":"<<S.M<<":0"<<i<<"       |"<<endl;
                }
                else
                    cout<<"|       TIME :- "<<S.H<<":"<<S.M<<":"<<i<<"       |"<<endl;
                cout<<"|------------------------------|"<<endl;
                if(i<=1)
                {
                    S.M--;
                    i=60;
                }
                if(S.M==0)
                {
                    S.H--;
                    S.M=60;
                }
                if(kbhit())
                {
                    cout<<"STOP";
                    break;
                }
                sleep(1);
                i--;
                I++;
            }
        }
        void DefaultWatch()
        {
            while(1)
            {
                system("cls");
                cout<<"|.*.*.*.[DIGITAL  WATCH].*.*.*.|\n\n";
                cout<<"|------------------------------|"<<endl;
                if(T.H<10||T.M<10||I<10)
                {
                    if(T.H<10&&T.M<10&&I<10)
                        cout<<"|        TIME :- 0"<<T.H<<":0"<<T.M<<":0"<<I<<"      |"<<endl;
                    else if(T.H<10&&I<10)
                        cout<<"|        TIME :- 0"<<T.H<<":"<<T.M<<":0"<<I<<"      |"<<endl;
                    else if(T.H<10&&T.M<10)
                        cout<<"|        TIME :- 0"<<T.H<<":0"<<T.M<<":"<<I<<"      |"<<endl;
                    else if(T.M<10&&I<10)
                        cout<<"|        TIME :- "<<T.H<<":0"<<T.M<<":0"<<I<<"      |"<<endl;
                    else if(T.H<10)
                        cout<<"|        TIME :- 0"<<T.H<<":"<<T.M<<":"<<I<<"      |"<<endl;
                    else if(T.M<10)
                        cout<<"|       TIME :- "<<T.H<<":0"<<T.M<<":"<<I<<"       |"<<endl;
                    else if(I<10)
                        cout<<"|       TIME :- "<<T.H<<":"<<T.M<<":0"<<I<<"       |"<<endl;
                }
                else
                    cout<<"|       TIME :- "<<T.H<<":"<<T.M<<":"<<I<<"       |"<<endl;
                cout<<"|------------------------------|"<<endl;
                cout<<"| DAY :- "<<DAY<<"   /  MONTH :- "<<MONTH<<" |"<<endl;
                if(DATE<10)
                    cout<<"| DATE :- "<<DATE<<"   /   YEAR :- "<<YEAR<<" |\n";
                else
                    cout<<"| DATE :- "<<DATE<<"  /   YEAR :- "<<YEAR<<" |\n";
                cout<<"|------------------------------|"<<endl;
                if(A.H<10||A.M<10||A.S<10)
                {
                    if(A.H<10&&A.M<10&&A.S<10)
                        cout<<"|       ALARM :- 0"<<A.H<<":0"<<A.M<<":0"<<A.S<<"      |"<<endl;
                    else if(A.H<10&&A.S<10)
                        cout<<"|       ALARM :- 0"<<A.H<<":"<<A.M<<":0"<<A.S<<"      |"<<endl;
                    else if(A.H<10&&A.M<10)
                        cout<<"|       ALARM :- 0"<<A.H<<":0"<<A.M<<":"<<A.S<<"      |"<<endl;
                    else if(A.M<10&&A.S<10)
                        cout<<"|       ALARM :- "<<A.H<<":0"<<A.M<<":0"<<A.S<<"      |"<<endl;
                    else if(A.H<10)
                        cout<<"|       ALARM :- 0"<<A.H<<":"<<A.M<<":"<<A.S<<"      |"<<endl;
                    else if(A.M<10)
                        cout<<"|      ALARM :- "<<A.H<<":0"<<A.M<<":"<<A.S<<"       |"<<endl;
                    else if(A.S<10)
                        cout<<"|      ALARM :- "<<A.H<<":"<<A.M<<":0"<<A.S<<"       |"<<endl;
                }
                else
                    cout<<"|      ALARM :- "<<A.H<<":"<<A.M<<":"<<A.S<<"       |"<<endl;
                cout<<"|------------------------------|"<<endl;
                cout<<"| [E] ->  EDIT  /  [O] ->  OFF |"<<endl;
                cout<<"|------------------------------|"<<endl;
                if(T.H==A.H&&T.M==A.M&&I==A.S)
                {
                    ALARM();
                }
                char c;
                if(kbhit())
                {
                    switch(getch())
                    {
                        case 'e':
                        case 'E':
                            EDIT();
                            break;
                        case 'o':
                        case 'O':
                            exit(1);
                    }
                }
                sleep(1);
                I++;
                if(I>59)
                {
                    T.M++;
                    I=0;
                }
                if(T.M>59)
                {
                    T.H++;
                    T.M=0;
                }
                if(T.H>23)
                {
                    DATE++;
                    T.H=0;
                }
            }
        }
        void EDIT()
        {
            system("cls");
            cout<<"T. -> SET TIME"<<endl;
            cout<<"A. -> SET ALARM"<<endl;
            cout<<"O. -> OFF WATCH"<<endl;
            cout<<"S. -> START TIMER"<<endl;
            char c=getch();
            switch(c)
            {
                case 'A':
                case 'a':
                    SetAlarm(1);
                    break;
                case 'T':
                case 't':
                    SetTime();
                    break;
                case 's':
                case 'S':
                    SetTimer();
                    break;
                case 'o':
                case 'O':
                    exit(0);
            }
        }
        void tim(int ti)
        {
            T.H=ti/10000;
            ti=ti%10000;
            T.M=ti/100;
            ti=ti%100;
            T.S=ti;
            I=T.S++;
        }
        int NUMBER(char *t)
        {
            int n=0;
            for(int i=0;*(t+i)!='\0';i++)
            {
                if(*(t+i)=='0')
                    n=n*10+0;
                else if(*(t+i)=='1')
                    n=n*10+1;
                else if(*(t+i)=='2')
                    n=n*10+2;
                else if(*(t+i)=='3')
                    n=n*10+3;
                else if(*(t+i)=='4')
                    n=n*10+4;
                else if(*(t+i)=='5')
                    n=n*10+5;
                else if(*(t+i)=='6')
                    n=n*10+6;
                else if(*(t+i)=='7')
                    n=n*10+7;
                else if(*(t+i)=='8')
                    n=n*10+8;
                else if(*(t+i)=='9')
                    n=n*10+9;
            }
            return n;
        }
        void SetData(char *a)
        {
            int ti;
            for(int i=0;*(a+i)!='\0';i++)
            {
                if(i<3)
                    DAY[i]=*(a+i);
                else if(i>3&&i<7)
                    MONTH[i-4]=*(a+i);
                else if(i>7&&i<10)
                    d[i-8]=*(a+i);
                else if(i<19)
                    t[i-10]=*(a+i);
                else if(i>17&&i<24)
                    y[i-19]=*(a+i);
            }
            ti=NUMBER(t);
            tim(ti);
            YEAR=NUMBER(y);
            DATE=NUMBER(d);
        }
        WATCH()
        {
            time_t t=time(NULL);
            char* a=ctime(&t);
            SetData(a);
            SetAlarm(0);
        }
};
int main()
{
    system("cls");
    WATCH W;
    W.DefaultWatch();
    return 0;
}