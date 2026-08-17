#include<bits/stdc++.h>
using namespace std;
const int mx = 5;

int arr[mx];

int Front = -1;
int rear = -1;

void enqueue(int value)
{
    if(rear == (Front+1)%mx)
    {
        cout<<"Queue Overflow"<<endl;
        return;
    }
    if(Front == -1)
    {
        Front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear+1)%mx;
    }
    arr[rear] = value;
}

void dequeue()
{
    if(Front == -1)
    {
        cout<<"Queue underflow!"<<endl;
        return;
    }
    if(rear == Front)
    {
        rear = -1;
        Front = -1;
    }
    else
    {
        Front = (Front+1)%mx;
    }

}

void display()
{
    if(Front == -1)
    {
        cout<<"Queue is empty!"<<endl;
        return;
    }

    int i = Front;

    while(true)
    {
        cout<<arr[i]<<" ";
        if(i == rear)
        {
            break;
        }
        else
        {
            i = (i+1)%mx;
        }
    }
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
