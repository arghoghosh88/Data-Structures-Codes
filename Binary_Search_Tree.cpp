#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createnode(int value)
{
    Node *newnode = new Node;

    newnode->data = value;

    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

Node *insert_tree(Node *root,int value)
{
    if(root == NULL)
    {
        return createnode(value);
    }

    if(value <= root->data)
    {
        root->left = insert_tree(root->left,value);
    }
    else
    {
        root->right = insert_tree(root->right,value);
    }

    return root;
}

bool search_tree(Node *root,int value)
{
    if(root == NULL)
    {
        return false;
    }

    if(value == root->data)
    {
        return true;
    }

    if(value < root->data)
    {
        return search_tree(root->left,value);
    }
    else
    {
        return search_tree(root->right,value);
    }
}

void preorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";

    preorder(root->left);

    preorder(root->right);
}

void inorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);

    cout<<root->data<< " ";

    inorder(root->right);
}

void postorder(Node *root)
{
    if(root == NULL)
    {
        return;
    }

    postorder(root->left);

    postorder(root->right);

    cout<<root->data<<" ";
}

int main()
{
    Node* root = NULL;
    int n,value;

    cout<<" Enter number of nodes : ";
    cin>>n;

    cout<<"Enter the values : ";

    for(int i=0; i<n; i++)
    {
        cin>>value;
        root = insert_tree(root,value);
    }

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;

    cout<<"PostOrder : ";
    postorder(root);
    cout<<endl;

    int search_value;

    cout<<"Enter value to search : ";
    cin>>search_value;

    if(search_tree(root,search_value))
    {
        cout<<search_value<<" is found in the tree.";
    }
    else
    {
        cout<<search_value<<" is not found in the tree.";
    }
}
