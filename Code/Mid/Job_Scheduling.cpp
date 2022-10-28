#include <iostream>
#include <algorithm>
using namespace std;

struct Job
{
	int start, finish, profit;
};

bool compare(Job a, Job b)
{
	return (a.finish < b.finish);
}

int latestNonConflict(Job arr[], int i)
{

	for (int j=i-1; j>=0; j--)
	{

		if (arr[j].finish <= arr[i-1].start)
			return j;
	}
	return -1;
}

int profitRec(Job arr[], int n)
{
	if (n == 1)
        return arr[n-1].profit;

	int inclProf = arr[n-1].profit;

	int i = latestNonConflict(arr, n);

	if (i != -1)
	inclProf = inclProf+profitRec(arr, i+1);

	int exclProf = profitRec(arr, n-1);

	return max(inclProf, exclProf);
}

int profit(Job arr[], int n)
{
	sort(arr, arr+n, compare);

	return profitRec(arr, n);
}

int main()
{
    int x;
    cout<<"Please Enter Number of Jobs:";
    cin>>x;
	struct Job arr[x];
	for(int i=0;i<x;i++)
    {
        cout<<"Job "<<i+1<<" Start Time:";
        cin>>arr[i].start;
        cout<<"Job "<<i+1<<" Finish Time:";
        cin>>arr[i].finish;
        cout<<"Job "<<i+1<<" Profit:";
        cin>>arr[i].profit;
    }
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "The optimal profit is " << profit(arr, n);
	return 0;
}
