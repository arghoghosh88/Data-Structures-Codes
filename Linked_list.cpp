#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void inserting(Node* &head,int value)
{
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next = NULL;

    if(head==NULL)
    {
        head = newnode;
        return;
    }

    Node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}


void deleting(Node *&head,int value)
{
    if(head == NULL)
    {
        return;
    }
    if(head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;

    while(current->next != NULL && current->next->data != value)
    {
        current = current->next;
    }

    if(current->next != NULL)
    {
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
        return;
    }
}

void insertposition(Node* &head,int pos,int value)
{
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next = NULL;

    if(pos == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node *temp = head;

    for(int i=0; i<pos-1; i++)
    {
        if(temp == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void deletingposition(Node* &head,int pos)
{
    if(head == NULL)
    {
        return;
    }
    if(pos==0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;

    for(int i=0; i<pos-1; i++)
    {
        if(current==NULL)
        {
            return;
        }
        current = current->next;
    }

    if(current==NULL || current->next == NULL)
    {
        return;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
}
void display(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node *head = NULL;

    int n;
    cout<<"Enter size : ";

    cin>>n;

    vector<int>v(n);
    cout<<"Enter Array : ";
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        inserting(head,v[i]);
    }
    insertposition(head,2,90);
    deleting(head,2);
    deletingposition(head,2);
    display(head);
}
