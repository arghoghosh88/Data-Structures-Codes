#include<bits/stdc++.h>
using namespace std;
int part(vector<int>&v,int beg, int last)
{
    int target = v[last];
    int i = beg-1;

    for(int j = beg; j<last; j++)
    {
        if(v[j]<=target)
        {
            i++;
            swap(v[i],v[j]);
        }

    }
    swap(v[i+1],v[last]);
    return i+1;
}
void Quicksort(vector<int>&v,int beg, int last)
{
    if(beg<last)
    {
        int p = part(v,beg,last);
        Quicksort(v,beg,p-1);
        Quicksort(v,p+1,last);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array : "; cin>>n;
    vector<int>v(n);
    cout<<"Enter the array : ";
    for(int i=0; i<n; i++) cin>>v[i];
    Quicksort(v,0,n-1);
    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++) cout<<v[i] << " ";
}
