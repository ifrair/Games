#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <conio.h>
#include<iostream>
#include<windows.h>
#include "windows.h"
#pragma GCC optimize("Ofast")
#pragma optimize("O3")


using namespace std;

long long n,m,k,i,j,f,l,p,x,y,h,o,r;
char c,c1[1000];
string s,s1,s2,s3;

int main()
{
    system("color B0");
   // ios_base::sync_with_stdio(0);
    setlocale(LC_ALL,"ru");
    while(r==0)
    {
        cout<<endl<<endl<<"        Please type the word"<<endl<<endl<<endl<<endl<<"        ";
        for(i=0;i<s.size();i++)
        {
            cout<<"* ";
        }
        while(x!=13&&x!=32)
        {
            x=_getch();
            if(x==8)
                break;
            if(x!=13&&x!=32)
            {
                s+=x;
                cout<<'*'<<' ';
            }
            else
                r=1;
        }
        if(r==1)break;
        system("cls");
        //s=" ";
        if(s.size()!=0)s.erase(s.size()-1,1);
    }
    r=0;
    cout<<endl<<endl<<endl<<endl<<"        Please enter the topic"<<endl<<endl<<endl<<endl<<"        ";
    getline(cin,s3);
    system("cls");
    cout<<endl;
    cout<<"                                                   "<<"Viselizca_2.0"<<endl<<endl;
    c1[m]=c;
    cout<<"       ";
    for(i=1; i<=m; i++)
        cout<<c1[i]<<" ";
    cout<<endl<<endl<<endl;
    cout<<"                   "<<"The topic is : "<<s3<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"                    ";
    for(i=0; i<s.size(); i++)
    {
        s1+="_";
        cout<<"_ ";
    }
    for(i=1; i<=10; i++)
        cout<<endl;
    while(f<7)
    {
        m++;
        k=0;
        cout<<"                    ";
        cin>>s2;
        system("cls");
        if(s2.size()>1)
        {
            if(s==s2)
                r=0;
            else
                r=1;
            break;
        }
        else
            c=s2[0];
        cout<<endl;
        cout<<"                                                    "<<"Viselizca_2.0"<<endl<<endl;
        int h=0;
        for(i=1; i<m; i++)
            if(c1[i]==c)
            {
                h=1;;
            }
        if(h==0)
            c1[m]=c;
        else
            m--;
        cout<<"       ";
        for(i=1; i<=m; i++)
            cout<<c1[i]<<" ";
        cout<<endl<<endl<<endl;
        cout<<"                   "<<"The topic is : "<<s3<<endl<<endl<<endl;

        for(i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                k=1;
                s1[i]=s[i];
                // s[i]='^';
            }
        }
        int l=rand();
        l%=3;
        if(k==1)
        {
            if(h==1)
            {
                cout<<"                    BE CAREFUL!"<<endl;
            }
            else
            {
                if(l==0)
                    cout<<"                       SUPER!!!"<<endl;
                if(l==2)
                    cout<<"                      WONDERFUL!!!"<<endl;
                if(l==1)
                    cout<<"                      EXCELLENT!!!"<<endl;
            }
            for(i=1; i<=2
                    ; i++)
                cout<<endl;
        }
        else
        {
            if(h==1)
            {
                cout<<"                    BE CAREFUL!"<<endl;
            }
            else
            {
                if(l==0)
                    cout<<"                        NO!"<<endl;
                if(l==1)
                    cout<<"                      SO BAD!"<<endl;
                if(l==2)
                    cout<<"                    YOU CAN DO BETTER!"<<endl;
                f++;
            }
            for(i=1; i<=2; i++)
                cout<<endl;
        }
        cout<<"                       ";
        for(i=0; i<s.size(); i++)
            cout<<s1[i]<<" ";
        cout<<endl<<endl;
        if(f==1)
        {
            for(i=1; i<=5; i++)
                cout<<endl;
            cout<<"                       ___";
        }
        if(f==2)
        {
            cout<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                       _|__";
        }
        if(f==3)
        {
            cout<<"                         ____"<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                       _|__";
        }
        if(f==4)
        {
            cout<<"                         ____"<<endl<<"                        |    |"<<endl<<"                        |    0"<<endl<<"                        |"<<endl<<"                        |"<<endl<<"                       _|__";
        }
        if(f==5)
        {
            cout<<"                         ____"<<endl<<"                        |    |"<<endl<<"                        |    0"<<endl<<"                        |    |"<<endl<<"                        |"<<endl<<"                       _|__";
        }
        if(f==6)
        {
            cout<<"                         ____"<<endl<<"                        |    |"<<endl<<"                        |    0"<<endl<<"                        |   !|!"<<endl<<"                        |"<<endl<<"                       _|__";
        }
        if(f==7)
        {
            cout<<"                         ____"<<endl<<"                        |    |"<<endl<<"                        |    0"<<endl<<"                        |   !|!"<<endl<<"                        |    >>"<<endl<<"                       _|__";
        }
        if(f==0)
        for(i=1; i<=5; i++)
        cout<<endl;
        for(i=1; i<=5; i++)
        cout<<endl;
        r=0;

        for(i=0; i<s.size(); i++)
        {
            if(s1[i]=='_')
                r=1;
        }
        if(r==0)
            break;
    }

    while(r==0)
    {
        j++;
        system("cls");
        for(i=1;i<=10;i++)cout<<endl;
        if(j%2==1)
            cout<<"                            o          o          o"<<endl<<"                          <|_|>      <|_|>      <|_|>"<<endl<<"                           ||         ||         ||"<<endl<<endl<<endl;
        else
            cout<<"                            o          o          o"<<endl<<"                         *-|_|-*    *-|_|-*    *-|_|-*"<<endl<<"                           | |        | |        | |"<<endl<<endl<<endl;

        cout<<"                                  YOU WIN!!!"<<endl<<endl;
        for(i=1; i<39-s.size()/2; i++)
            cout<<' ';
        cout<<s<<endl<<endl<<endl;
        if(j%2==1)
            cout<<"                            o          o          o"<<endl<<"                          <|_|>      <|_|>      <|_|>"<<endl<<"                           ||         ||         ||"<<endl<<endl<<endl;
        else
            cout<<"                            o          o          o"<<endl<<"                         *-|_|-*    *-|_|-*    *-|_|-*"<<endl<<"                           | |        | |        | |"<<endl<<endl<<endl;

        for(i=1; i<=4; i++)
            cout<<endl;
        Sleep(250);
    }
    while(r!=0)
    {
        j++;
        j%=s.size();
        system("cls");
        for(i=1;i<=10;i++)cout<<endl;
        cout<<"                               YOU LOSE!!!"<<endl<<endl;
        for(i=1; i<35-s.size()/2; i++)
            cout<<' ';
        for(i=0; i<s.size(); i++)
        {
            if(i!=j)
                cout<<s[i];
            else
                cout<<'*';
            cout<<' ';
        }
        Sleep(250);
    }
}
