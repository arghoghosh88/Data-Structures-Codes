#include<bits/stdc++.h>
using namespace std;
stack<int>s1;
stack<int>s2;

void enqueue(int value)
{
    s1.push(value);
    cout<<"Value inserted : "<<value<<endl;
}

void dequeue()
{
    if(s1.empty() && s2.empty())
    {
        cout << "Queue Underflow ";
        return;
    }

    if(s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

    }
    cout<<"Popped element : "<<s2.top()<<endl;
        s2.pop();
}

void Front()
{
    if(s1.empty() && s2.empty())
    {
        cout << "Queue Underflow ";
        return;
    }

    if(s2.empty())
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        cout<<"Front element : "<<s2.top()<<endl;

    }
}


int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
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
            Front();
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
