#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <conio.h>
#include "windows.h"
#pragma GCC optimize("Ofast")
#pragma optimize("O3")

using namespace std;

long long i,j,k,n,m,f,p,x,y,x2,y2,z,z2;
char c,c1,a[1000][1000],b[1000][1000];
string s,s1,s2,s3,s4;

int main()
{
    ios_base::sync_with_stdio(0);
    setlocale(LC_ALL,"ru");
    system("color B0");
    for(i=0; i<8; i++)
        cout<<endl;
    cout<<"        Please enter 1 Player name : ";
    for(i=0; i<2; i++)
        cout<<endl;
    cout<<"        ";
    getline(cin,s1);
    system("cls");
    for(i=0; i<8; i++)
        cout<<endl;
    cout<<"        Please enter 2 Player name : ";
    for(i=0; i<2; i++)
        cout<<endl;
    cout<<"        ";
    getline(cin,s2);
    system("cls");
    while(z==0)
    {
        for(i=0; i<=10; i++)
        {
            for(j=0; j<=10; j++)
            {
                a[i][j]=0;
                b[i][j]=0;
            }
        }
        f=0;
        x=0;
        y=0;
        n=0;
        m=0;
        p=0;
        k=0;

        while(f<9)
        {
            f++;
            cout<<endl;
            cout<<"TicTacToe 3.0"<<endl<<endl<<endl;

            cout<<' '<<s1<<" - ";
            if(z2%2==0)
                cout<<"x";
            else
                cout<<"o";
            cout<<" - "<<x2<<endl;
            cout<<' '<<s2<<" - ";
            if(z2%2==0)
                cout<<"o";
            else
                cout<<"x";
            cout<<" - "<<y2;
            for(i=0; i<3; i++)
                cout<<endl;
                cout<<' ';
                if(f%2==1)
            {
                cout<<"";
                if(z2%2==0)
                    cout<<s1;
                else
                    cout<<s2;
                    cout<<" should make this turn";
            }
            else
            {

                if(z2%2==1)
                    cout<<s1;
                else
                    cout<<s2;
                    cout<<" should make this turn";
            }
            cout<<endl<<endl<<endl;;
            cout<<"                   1  2  3"<<endl<<"                   ________"<<endl;
            for(i=1; i<=3; i++)
            {
                cout<<"                "<<i<<" |"<<a[i][1]<<" |"<<a[i][2]<<" |"<<a[i][3]<<" |"<<endl<<"                  |__|__|__|"<<endl;
            }
            for(i=0; i<5; i++)
                cout<<endl;

            //cin>>x>>y;
            x=_getch();
            if(x=='1')
            {
                x=3;
                y=1;
            }
            if(x=='2')
            {
                x=3;
                y=2;
            }
            if(x=='3')
            {
                x=3;
                y=3;
            }
            if(x=='4')
            {
                x=2;
                y=1;
            }
            if(x=='5')
            {
                x=2;
                y=2;
            }
            if(x=='6')
            {
                x=2;
                y=3;
            }
            if(x=='7')
            {
                x=1;
                y=1;
            }
            if(x=='8')
            {
                x=1;
                y=2;
            }
            if(x=='9')
            {
                x=1;
                y=3;
            }
            if(a[x][y]=='o'||a[x][y]=='x')
                f--;
            else
            {
                if(f%2==1&&a[x][y]!='o'&&a[x][y]!='x')
                    a[x][y]='x';
                else if(f%2==0&&a[x][y]!='x'&&a[x][y]!='o')
                    a[x][y]='o';
                if(x>3||y>3)
                    f--;
                else if(f%2==1&&a[x][y]=='o')
                    f--;
                else if(f%2==0&&a[x][y]=='x')
                    f--;
            }
            p=0;
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=3; j++)
                {
                    b[i][j]=a[i][j];
                }
            }
            for(i=1; i<=3; i++)
            {
                for(j=1; j<=3; j++)
                {
                    if(a[i][j]=='x')
                    {
                        if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2])
                        {
                            if(z2%2==0)
                                p=1;
                            else
                                p=2;
                            b[i][j]=' ';
                            b[i][j+1]=' ';
                            b[i][j+2]=' ';
                        }
                        else if(a[i][j]==a[i+1][j]&&a[i+1][j]==a[i+2][j])
                        {
                            if(z2%2==0)
                                p=1;
                            else
                                p=2;
                            b[i][j]=' ';
                            b[i+2][j]=' ';
                            b[i+1][j]=' ';
                        }
                        else if(a[i][j]==a[i+1][j+1]&&a[i+1][j+1]==a[i+2][j+2])
                        {
                            if(z2%2==0)
                                p=1;
                            else
                                p=2;
                            b[i+1][j+1]=' ';
                            b[i][j]=' ';
                            b[i+2][j+2]=' ';
                        }
                        else if(a[i][j]==a[i+1][j-1]&&a[i+1][j-1]==a[i+2][j-2])
                        {
                            if(z2%2==0)
                                p=1;
                            else
                                p=2;
                            b[i+1][j-1]=' ';
                            b[i+2][j-2]=' ';
                            b[i][j]=' ';
                        }

                    }
                    if(a[i][j]=='o')
                    {
                        if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i][j+2])
                        {
                            if(z2%2==1)
                                p=1;
                            else
                                p=2;
                            b[i][j]=' ';
                            b[i][j+1]=' ';
                            b[i][j+2]=' ';
                        }
                        else if(a[i][j]==a[i+1][j]&&a[i+1][j]==a[i+2][j])
                        {
                            if(z2%2==1)
                                p=1;
                            else
                                p=2;
                            b[i][j]=' ';
                            b[i+2][j]=' ';
                            b[i+1][j]=' ';
                        }
                        else if(a[i][j]==a[i+1][j+1]&&a[i+1][j+1]==a[i+2][j+2])
                        {
                            if(z2%2==1)
                                p=1;
                            else
                                p=2;
                            b[i+1][j+1]=' ';
                            b[i][j]=' ';
                            b[i+2][j+2]=' ';
                        }
                        else if(a[i][j]==a[i+1][j-1]&&a[i+1][j-1]==a[i+2][j-2])
                        {
                            if(z2%2==1)
                                p=1;
                            else
                                p=2;
                            b[i+1][j-1]=' ';
                            b[i+2][j-2]=' ';
                            b[i][j]=' ';
                        }
                    }
                }
            }
            if(p>0)
                break;
            system("cls");
        }
        if(p==1)
            x2++;
        if(p==2)
            y2++;
        z2++;
        f=0;
        system("cls");
        while (f<20)
        {
            system("cls");
            for(i=1; i<=6; i++)
                cout<<endl;
            if(f%2==0)
            {
                cout<<"                            o          o          o"<<endl<<"                          <|_|>      <|_|>      <|_|>"<<endl<<"                            ||         ||         ||"<<endl<<endl<<endl;
                f++;
                if(p==0)
                {
                    cout<<"                                   DRAW";
                }
                if(p==1)
                {
                    for(i=1; i<=35-s1.size()/2; i++)
                        cout<<' ';
                    cout<<s1<<" win!!!";
                }
                if(p==2)
                {
                    for(i=1; i<=35-s2.size()/2; i++)
                        cout<<' ';
                    cout<<s2<<" win!!!";
                }
                for(i=0; i<3; i++)
                    cout<<endl;
                cout<<"                                "<<endl<<"                                 ________"<<endl;
                for(i=1; i<=3; i++)
                {
                    cout<<"                                "<<"|"<<a[i][1]<<" |"<<a[i][2]<<" |"<<a[i][3]<<" |"<<endl<<"                                |__|__|__|"<<endl;
                }
            }
            else
            {
                cout<<"                            o          o          o"<<endl<<"                         *-|_|-*    *-|_|-*    *-|_|-*"<<endl<<"                           | |        | |        | |"<<endl<<endl<<endl;
                f++;
                if(p==0)
                {
                    cout<<"                                   DRAW";
                }
                if(p==1)
                {
                    for(i=1; i<=35-s1.size()/2; i++)
                        cout<<' ';
                    cout<<s1<<" win!!!";
                }
                if(p==2)
                {
                    for(i=1; i<=35-s2.size()/2; i++)
                        cout<<' ';
                    cout<<s2<<" win!!!";
                }
                for(i=0; i<3; i++)
                    cout<<endl;
                cout<<"                                "<<endl<<"                                 ________"<<endl;
                for(i=1; i<=3; i++)
                {
                    cout<<"                                "<<"|"<<b[i][1]<<" |"<<b[i][2]<<" |"<<b[i][3]<<" |"<<endl<<"                                |__|__|__|"<<endl;
                }
            }
            Sleep(250);
            system("cls");
        }
        for(i=1; i<=300; i++)
            cout<<endl;
        cout<<"                   Score : "<<s1<<" - "<<x2<<endl<<endl<<"                           "<<s2<<" - "<<y2;
        for(i=0; i<2; i++)
            cout<<endl;
        cout<<"                   Click 0 to continue"<<endl<<endl<<"                   Click 1 to finish";
        for(i=1; i<=13; i++)
            cout<<endl;
        while(x!=49&&x!=48)
        {
            int x=getch();
            if(x==48)
                z=0;
            if(x==49)
                z=1;
            if(x==49||x==48)
                break;
        }
        system("cls");
    }
    while(true)
    {
        j++;
        j%=30;
        cout<<"                  Frendship is the champion always!"<<endl<<"                  (But ";
        if(x2>y2)
            cout<<s1;
        else
            cout<<s2;
        cout<<" is better)";
        for(i=0; i<=j+1; i++)
            cout<<endl;
        x=0;
        Sleep(100);
    }

}



/*
    0
 *-|_|-*
   | |*/
