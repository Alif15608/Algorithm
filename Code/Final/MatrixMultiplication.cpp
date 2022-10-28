#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int a[10][10],b[10][10],d[10][10],x,y,r,c,i,j,k;
cout<<"Enter the number of row's of First Matrix=";
cin>>r;
cout<<"Enter the number of column of First Matrix=";
cin>>c;
cout<<"Enter the number of row's of Second Matrix=";
cin>>x;
cout<<"Enter the number of column of Second Matrix=";
cin>>y;
if(c==x)
{
cout<<"Enter the first matrix element=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter the second matrix element=\n";
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cin>>b[i][j];
}
}
{
cout<<"Multiply of the matrix=\n";
for(i=0;i<c;i++)
{
for(j=0;j<x;j++)
{
d[i][j]=0;
for(k=0;k<x;k++)
{
d[i][j]+=a[i][k]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<y;j++)
{
cout<<d[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}
}
else
    cout<<"Matrix Multiplication is not possible";
}
