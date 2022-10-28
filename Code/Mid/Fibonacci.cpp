#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
    else
	return fib(n-1) + fib(n-2);
}

int main ()
{
	int n;
	cout<<"Please Enter the Number:";
	cin>>n;
	cout <<"Fibonacci Series:"<<fib(n);
	getchar();
	return 0;
}
