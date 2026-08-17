#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *top = NULL;
void push(int value)
{
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next = top;

    top = newnode;

}
void pop()
{
    if(top==NULL)
    {
        return;
    }
    Node *temp = top;
    cout<<"Popped element: "<<temp->data<<endl;
    top = top->next;
    delete temp;
}

void display()
{
    Node *temp = top;

    if(top==NULL)
    {
        cout<<"Stack is empty!"<<endl;
        return;
    }

    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main() {
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
