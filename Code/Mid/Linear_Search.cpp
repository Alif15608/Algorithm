#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
        else
	        return -1;
}

int main(void)
{
	int a;
    cout << "Please enter the size of array: ";
    cin>>a;
    int arr[a];
    cout<<"Please enter the elements to the array: "<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
	 int x;
    cout<<"Which element do you want to search?"<<endl;
    cin>>x;
	int n = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, n, x);
	if (result == -1)
         cout << "Element is not present in array";
    else
         cout << "Element is present at index " << result;
	return 0;
}
