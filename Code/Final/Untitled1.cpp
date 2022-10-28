#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i,j,m,n,c[10][10];
char x[1],y[10],b[10][10];

void lcs()
{
    m=strlen(x);
    n=strlen(y);
    for(i=0;i<=m;i++)
        c[i][0]=0;
    for(i=0;i<=n;i++)
        c[0][i]=0;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;i++)
    {
        if(x[i-1]==y[j-1])
        {
            c[i][j]=c[i-1][j-1]+1;
            b[i][j]='c';
        }
        else if(c[i-1][j]>=c[i][j-1])
        {
            c[i][j]=c[i-1][j];
            b[i][j]='u';
        }
        else
        {
          c[i][j]=c[i][j-1];
            b[i][j]='l';
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
            if (b[i][j]=='c')
                 cout<<"\nLCS: "<<x[i-1];
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
    lcs();
}
