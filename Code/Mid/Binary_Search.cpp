#include <iostream>
using namespace std;

void BubbleSort (int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}
}

int BinarySearch(int arr[], int low, int high, int x){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Please enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Please enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
    }
    BubbleSort(arr, n);
	cout<<"\nSorted Data ";
	for (int i = 0; i < n; i++)
    {
        cout<<"->"<<arr[i];
    }
    cout<<endl;
    int x;
    cout<<"Which element do you want to search?"<<endl;
    cin>>x;
    int location = BinarySearch(arr, 0, n-1, x);
    if(location == -1)
    {
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Element is found at location: "<<location<<endl;
    }

    return 0;
}
