#include <bits/stdc++.h>
using namespace std;

void countCurrency(int x)
{
	int notes[10]={1000,500,200,100,50,20,10,5,2,1};
	int noteCounter[10]={0};

	for(int i=0;i<10;i++)
    {
		if(x>=notes[i])
		{
			noteCounter[i]=x/notes[i];
			x=x-noteCounter[i]*notes[i];
		}
	}
	cout<<"Currency Count ->"<<endl;
	for (int i=0;i<10;i++)
	{
		if (noteCounter[i] != 0)
		{
			cout<<notes[i]<<" : "<<noteCounter[i]<<endl;
		}
	}
}

int main()
{
	int n;
	cout<<"Please Enter the Amount:";
	cin>>n;
	countCurrency(n);
}
