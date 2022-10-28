#include<iostream>
using namespace std;

int *insertionSort(int a[],int n)
{

	for(int i=1;i<n;i++)
        {

        int key=a[i];

            int j=i-1;
            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
	    }
	return a;
}

void show(int arr[],int n){

	cout<<"Elements after sorting: "<<endl;

	for(int i=0;i<n;i++){

      cout<<"Array index "<<i<<": "<<arr[i]<<endl;

	}
}

int main(){

    cout<<"Enter the number of elements:";
	int n;
	cin>>n;
	int arr[n];
	cout<<"\nEnter Array Elements : "<<endl;
	for(int i=0;i<n;i++){

        cout<<"Array index "<<i<<": ";
        cin>>arr[i];
	}

	*arr=*insertionSort(arr,n);
	show(arr,n);

}
