#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    Node *next;
};


void insert_link(Node* &head,int value)
{
    Node *newnode = new Node;
    newnode->value = value;
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

void delete_node(Node *&head, int target)
{
    if(head == NULL)
    {
        return;
    }
    if(head->value == target)
    {
        Node *temp = new Node;
        temp = head;
        head = head->next;
        delete temp;
    }

    Node *current = head;

    while(current->next != NULL && current->next->value != target)
    {
        current = current->next;
    }
    if(current->next!=NULL)
    {
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;

    }
}

void show(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" -> ";
        temp = temp->next;



    }
    cout<<"NULL"<<endl;

}
void insert_pos(Node *&head, int value,int pos)
{
    Node *newnode = new Node;
    newnode->value = value;
    newnode->next = NULL;

    Node *temp = head;
    int i = 2;
    while(i!=pos)
    {
        temp = temp->next;
       i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;



}
//void sorting(Node *&head)
//{
//    Node *temp = head;
//    vector<int>a;
//    while(temp->next!=NULL)
//    {
//        a.push_back(temp->value);
//    }
//    sort(a.begin(),a.end());//bhut1234
//
//    int i=0;
//    while(temp->next!=NULL)
//    {
//        temp->value = a[i];
//        i++;
//    }
//    show(temp);
//}
int main()
{
    Node *head = NULL;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        insert_link(head,v[i]);
    }

    show(head);
    insert_pos(head,99,3);
    show(head);
    return 0;
}















