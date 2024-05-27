#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
using namespace std;
int a[16];
int swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void value()
{
    int i,j,v;
    srand(time(NULL));

    for(i=0;i<16;i++)
    {
        r1:
        v=rand()%16;
        a[i]=v;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                goto r1;
        }
    }
}
void arrow()
{
    int i,j,a;
    for(i=0;i<=5;i++)
    {
        for(j=-11;j<=11;j++)
        {
            if(j==6)
                cout<<"|";
            else if(j>i&&j<6)
                cout<<"\\";
            else if(j>6&&j<12-i)
                cout<<"/";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void ans()
{
    int i,j,a=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==3&&j==3)
                cout<<"|\t|";
            else
                cout<<"|  "<<a<<"\t|";
                a++;
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int arr[4][4],l,i,j,v=0,b=0;
    system("cls");
    system("color f");
    cout<<"\t   [NUMBER PUZZLE]\n\n";
    value();
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            arr[i][j]=a[v];
            v++;
            if(arr[i][j]==0)
                cout<<"|\t|";
            else
                cout<<"|  "<<arr[i][j]<<"\t|";
        }
        cout<<endl;
    }cout<<endl;
    cout<<"\n[Arrange this [NUMBER PUZZLE] in following order.]\n\n";
    arrow();
    ans();
    cout<<"\n\t   [GAME RULES]\n\n";
    cout<<"Press [UP ARROW KEY] for 'UP' side.\n\nPress [DOWN ARROW KEY] for 'DOWN' side.\n\nPress [LEFT ARROW KEY] for 'LEFT' side.\n\nPress [RIGHT ARROW KEY] for 'RIGHT' side.\n\nPress [E/e] any time for 'EXIT' game.\n";
    cout<<"\nPress [ENTER] for 'START' game.\n\t\t!  ";
    getch();
    system("cls");
    cout<<"\nEnter your moves.\n\tM=";
    cin>>l;
    system("cls");
    cout<<"LOADING .";
    for(i=0;i<5;i++)
    {
        sleep(1);
        cout<<".";
    }
    while(l>0)    //moves
    {
        system("color 2");
        b=0;
        system("cls");
        cout<<"\t   [TOTAL MOVES= "<<l<<"]";
        cout<<"\n\n";
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(arr[i][j]==0)
                    cout<<"|\t|";
                else
                    cout<<"|  "<<arr[i][j]<<"\t|";
            }
            cout<<endl;
        }
        cout<<endl;
        switch(getch())
        {
            case 'E':
            case 'e':
            {
                system("color c");
                cout<<"\n\t   [GAME END]\n";
                getch();
                exit(0);
            }
            break;
            case 80:  //down
            {
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        if(arr[i][j]==0)
                            if(i!=0)
                            {
                                swap(&arr[i][j],&arr[i-1][j]);
                                l--;
                            }
                    }
                }
                
            }
            break;
            case 75:  //left
            {
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        if(arr[i][j]==0)
                        if(j!=3)
                        {
                            swap(&arr[i][j],&arr[i][j+1]);
                            l--;
                            b++;
                        }
                        if(b!=0)
                            break;
                    }
                    if(b!=0)
                        break;
                }
                if(b!=0)
                    break;
            }
            break;
            case 77:  //right
            {
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        if(arr[i][j]==0)
                        if(j!=0)
                        {
                            swap(&arr[i][j],&arr[i][j-1]);
                            l--;
                        }
                    }
                }
            }
            break;
            case 72:  //up 
            {
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        if(arr[i][j]==0)
                        if(i!=3)
                        {
                            swap(&arr[i][j],&arr[i+1][j]);
                            l--;
                            b++;
                            break;
                        }
                    }
                    if(b!=0)
                        break;
                }
                if(b!=0)
                    break;
            }
            break;
            case 'R':
            {
                v=0;
                for(i=0;i<4;i++)
                {
                    for(j=0;j<4;j++)
                    {
                        if(i==3&&j==3)
                            arr[i][j]=0;
                        else
                        {
                            v++;
                            arr[i][j]=v;
                        }
                    }
                }
                l--;
            }
            break;
        }
        system("cls");
        cout<<"\t   [TOTAL MOVES= "<<l<<"]";
        cout<<"\n\n";
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(arr[i][j]==0)
                    cout<<"|\t|";
                else
                    cout<<"|  "<<arr[i][j]<<"\t|";
            }
            cout<<endl;
        }
        cout<<endl;
        if(arr[0][0]==1&&arr[0][1]==2&&arr[0][2]==3&&arr[0][3]==4&&arr[1][0]==5&&arr[1][1]==6&&arr[1][2]==7&&arr[1][3]==8&&arr[2][0]==9&&arr[2][1]==10&&arr[2][2]==11&&arr[2][3]==12&&arr[3][0]==13&&arr[3][1]==14&&arr[3][2]==15&&arr[3][3]==0)
        {
            system("color d");
            cout<<"\n\t \3[ CONGRATULATION ]\3\n";
            cout<<"\n\t\3[ YOU WON THE GAME ]\3";
            c1:
            cout<<"\n\nDo you want to play game again.\n[y/n]=";
            char c;
            cin>>c;
            if(c=='y'||c=='Y')
                main();
            else if(c=='n'||c=='N')
            {
                system("cls");
                cout<<"\nPress nay key for exit.\n";
                getch();
                exit(0);
            }
            else
            {
                system("cls");
                goto c1;
            }
        }
    }
    if(l==0)
    {
        system("color c");
        cout<<"\n\t  \1[GAME OVER]\1";
        c2:
        cout<<"\n\nDo you want to play game again.\n[y/n]=";
        char c;
        cin>>c;
        if(c=='y'||c=='Y')
            main();
        else if(c=='n'||c=='N')
        {
            system("cls");
            cout<<"\nPress nay key for exit.\n";
            getch();
            exit(0);
        }
        else
        {
            system("cls");
            goto c2;
        }
        getch();
    }
    return 0;
    getch();
}