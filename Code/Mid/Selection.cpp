#include<iostream>
using namespace std;


void selectionsort(int *a,int n){
    int index,temp,flag;
    for(int i=0;i<n-1;i++)
    {
        flag=a[i];
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(flag>a[j])
            {
                flag=a[j];
                index=j;
            }
        }

        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }


}

void show (int *a,int n) {

    cout<<"Elements after sorting : "<<endl;
    for(int i=0;i<n;i++)
    {
         cout<<"Array index "<<i<<": "<<a[i]<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter the Size of the array:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Array index "<<i<<": ";
        cin>>arr[i];
    }

   selectionsort(arr,n);
   show(arr,n);

    return 0;
}

