#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)
{
    int factor=1;
	for(int i=n;i>0;i--)
    {
        factor=factor*i;
    }
    return factor;
}

int main()
{
	int num;
	cout<<"Please Enter the Number:";
	cin>>num;
	cout << "Factorial of "
		<< num << " is " << factorial(num) << endl;
	return 0;
}
