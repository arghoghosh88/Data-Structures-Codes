#include<bits/stdc++.h>
using namespace std;
#define mx 100
int arr[mx];
int Front = -1;
int rear = -1;
void enqueue(int value)
{
    if(rear == mx-1)
    {
        cout<<"Queue Overflow "<<endl;
        return;
    }

    if(Front == -1)
    {
        Front = 0;
    }

    rear++;

    arr[rear] = value;

}
void dequeue()
{
    if(Front == -1 && Front > rear)
    {
        cout<<"Queue Underflow!"<<endl;
    }
    cout<<"Removed : "<<arr[Front]<<endl;
    Front++;
}
void display()
{
    if(Front == -1)
    {
        cout<<"Queue is empty!"<<endl;
    }

    for(int i=Front; i<=rear; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
