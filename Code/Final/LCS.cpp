#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i,j,m,n,c[10][10];
char X[10],Y[10],b[10][10];

void lcs(int m,int n)
{
    for(i=0;i<=m;i++)
        c[i][0]=0;
    for(i=0;i<=n;i++)
        c[0][i]=0;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;i++)
    {
        if(X[i-1]==Y[j-1])
        {
            c[i][j]=c[i-1][j-1]+1;
            b[i][j]='d';
        }
        else if(c[i-1][j]>=c[i][j-1])
        {
            c[i][j]=c[i-1][j];
            b[i][j]='u';
        }
        else
        {
          c[i][j]=c[i][j-1];
            b[i][j]='b';
        }
    }
}

void print(int i,int j)
{
    for(i=1;i<=m;i++)
        for(j=1;j<=n;i++)
        {
            if(i==0 || j==0)
                return;
            if(b[i][j]=='d')
            {
                print(i-1,j-1);
                 cout<<"\nLCS: "<<X[i-1];
            }
            else if(b[i][j]=='u')
                print(i-1,j);
            else
                print(i,j-1);
        }
}

int main()
{
    int a,b;
    cout << "Please enter the size of 1'St array: ";
    cin>>a;
    char X[a];
    cout<<"Please enter the elements of the array: "<<endl;
    for(int i=0;i<a;i++)
        {
            cin>>X[i];
        }
    cout << "Please enter the size of 2'nd array: ";
    cin>>b;
    char Y[b];
    cout<<"Please enter the elements of the array: "<<endl;
    for(int i=0;i<b;i++)
        {
            cin>>Y[i];
        }
    m=strlen(X);
    n=strlen(Y);
    lcs(m,n);
    print(i,j);
}
