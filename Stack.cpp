#include<bits/stdc++.h>
using namespace std;
#define MAX 100

int Stack[MAX];
int top = -1;

void push(int value)
{
    if(top == MAX-1)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    Stack[top] = value;

}
void pop()
{
    if(top==-1)
    {
        cout<<"The Stack is empty!"<<endl;
    }
    cout<<"Popped element is : "<<Stack[top--]<<endl;
    top--;
}

void display()
{
    for(int i=top; i>=0; i--)
    {
        cout<<Stack[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
