#include<bits/stdc++.h>
using namespace std;

void Tower_of_hanoi(int n,char beg, char aux, char last)
{
    if(n==1)
    {
        cout<<"Move disk from "<<beg<<" to "<<last<<endl;
        return;
    }
    Tower_of_hanoi(n-1,beg,last,aux);
    cout<<"Move disk from "<<beg<<" to "<<last<<endl;
    Tower_of_hanoi(n-1,aux,beg,last);
}

int main()
{
  int n;
  cout<<"Enter the number of disks : ";
  cin>>n;

  Tower_of_hanoi(n,'A','B','C');
}
