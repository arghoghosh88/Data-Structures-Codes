#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int left,int right)
{
    int pivot = arr[right];

    int i = left-1;
    for(int j=left; j<right; j++)
    {
        if(arr[j]<=pivot)
        {
            swap(arr[j],arr[i]);
        }
    }
    swap (arr[i+1],arr[right]);

    return i+1;
}

void quicksort(int arr[],int left,int right)
{
    if(left<right)
    {
        int p = partition(arr,left,right);
        quicksort(arr,left,p-1);
        quicksort(arr,p+1,right);
    }
}
int main()
{
    int n;
    cout<<"Enter Array size : ";
    cin >> n;
    int arr[n];
    cout<<"Enter array : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, n-1);

    cout << "Sorted Array";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
