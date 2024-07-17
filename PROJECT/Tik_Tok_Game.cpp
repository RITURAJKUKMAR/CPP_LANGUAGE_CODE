/* Tic Tac toe Game.
  X  |  O  | X
-----|-----|-----
     |     |  
-----|-----|-----
     |  O  | 
     */
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int a1,a2;
    char e,x1,x2,p1[30],p2[30],x[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    cout<<"Enter name player 1 : ";
    fflush(stdin);
    gets(p1);
    cout<<"Player 1 ["<<p1<<"] enter your symbol [X/O] : ";
    fflush(stdin);
    cin>>x1;
    cout<<"Enter name player 2 : ";
    fflush(stdin);
    gets(p2);
    if(x1=='x'||x1=='X')
    {
        x2='O';   
        x1='X';   
    }
    else
    {    
        x2='X';   
        x1='O';   
    }
    system("cls");
    cout<<"Player 1 [symbol : "<<x1<<"] = "<<p1<<endl;
    cout<<"Player 2 [symbol : "<<x2<<"] = "<<p2;
    cout<<"\n\nPress [ENTER] for start game."<<"  !";
    getch();
    while(1)
    {
        system("cls");
        cout<<"\n"<<endl;
        cout<<"  "<<x[0]<<"  "<<"|"<<"  "<<x[1]<<"  "<<"|"<<" "<<x[2]<<endl;
        cout<<"-----|-----|-----"<<endl;
        cout<<"  "<<x[3]<<"  "<<"|"<<"  "<<x[4]<<"  "<<"|"<<" "<<x[5]<<endl;
        cout<<"-----|-----|-----"<<endl;
        cout<<"  "<<x[6]<<"  "<<"|"<<"  "<<x[7]<<"  "<<"|"<<" "<<x[8]<<endl;
        cout<<endl<<endl;
        if((x[0]==x2&&x[1]==x2&&x[2]==x2)||(x[3]==x2&&x[4]==x2&&x[5]==x2)||(x[6]==x2&&x[7]==x2&&x[8]==x2)||(x[0]==x2&&x[4]==x2&&x[8]==x2)||(x[2]==x2&&x[4]==x2&&x[6]==x2)||(x[0]==x2&&x[3]==x2&&x[6]==x2)||(x[1]==x2&&x[4]==x2&&x[7]==x2)||(x[2]==x2&&x[5]==x2&&x[8]==x2))
        {
            cout<<p2<<" won."<<endl;
            cout<<p1<<" lost.";
            cout<<"\n\nDo you want to play game again.\n[y/n]=";
            cin>>e;
            if(e=='y'||e=='Y')
            {   main(); }
            else 
                exit(1);
        }
        if(x[0]!=' '&&x[1]!=' '&&x[2]!=' '&&x[3]!=' '&&x[4]!=' '&&x[5]!=' '&&x[6]!=' '&&x[7]!=' '&&x[8]!=' ')
        {
            cout<<"The game has been drawn."<<endl;
            cout<<"\n\nDo you want to play game again.\n[y/n]=";
            cin>>e;
            if(e=='y'||e=='Y')
            {   main(); }
            else 
                exit(1);
        }
        cout<<p1<<"  : enter your position no. : ";
        cin>>a1;
        x[--a1]=x1;
        system("cls");
        cout<<"\n"<<endl;
        cout<<"  "<<x[0]<<"  "<<"|"<<"  "<<x[1]<<"  "<<"|"<<" "<<x[2]<<endl;
        cout<<"-----|-----|-----"<<endl;
        cout<<"  "<<x[3]<<"  "<<"|"<<"  "<<x[4]<<"  "<<"|"<<" "<<x[5]<<endl;
        cout<<"-----|-----|-----"<<endl;
        cout<<"  "<<x[6]<<"  "<<"|"<<"  "<<x[7]<<"  "<<"|"<<" "<<x[8]<<endl;
        cout<<endl<<endl;
        if((x[0]==x1&&x[1]==x1&&x[2]==x1)||(x[3]==x1&&x[4]==x1&&x[5]==x1)||(x[6]==x1&&x[7]==x1&&x[8]==x1)||(x[0]==x1&&x[4]==x1&&x[8]==x1)||(x[2]==x1&&x[4]==x1&&x[6]==x1)||(x[0]==x1&&x[3]==x1&&x[6]==x1)||(x[1]==x1&&x[4]==x1&&x[7]==x1)||(x[2]==x1&&x[5]==x1&&x[8]==x1))
        {
            cout<<p1<<" won."<<endl;
            cout<<p2<<" lost.";
            cout<<"\n\nDo you want to play game again.\n[y/n]=";
            cin>>e;
            if(e=='y'||e=='Y')
            {   main(); }
            else 
                exit(1);
        }
        cout<<p2<<"  : enter your position no. : ";
        cin>>a2;
        x[--a2]=x2;
    }
    return 0;
}