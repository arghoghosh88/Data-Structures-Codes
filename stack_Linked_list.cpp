#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node *top = NULL;

void push(int value)
{
    Node *newnode = new Node;
    newnode->value = value;
    newnode->next = top;

    top = newnode;

}
void pop()
{
    if(top == NULL)
    {
        cout<<"Stack underflow " <<endl;
        return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
}

void display()
{
    Node *temp = top;

    while(temp->next != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }

}
int main()
{
    Node *t;
    while(true)
    {
        int n;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>n;
        switch(n)
        {
        case 1:
            int value;
            cout<<"Enter value : ";
            cin>>value;
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
            cout<<"Invalid option chosen"<<endl;
        }
    }
}
