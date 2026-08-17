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

    cout<<root->data<<" ";

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
    Node *root = createnode(1);

    root->left = createnode(2);

    root->right = createnode(3);

    root->left->left = createnode(4);

    root->left->right = createnode(5);

    root->right->left = createnode(6);

    root->right->right = createnode(7);

    root->left->left->left = createnode(8);
    root->left->left->right = createnode(9);

    root->left->right->left = createnode(10);
    root->left->right->right = createnode(11);

    root->right->left->left = createnode(12);
    root->right->left->right = createnode(13);

    root->right->right->left = createnode(14);
    root->right->right->right = createnode(15);


    cout<<"Preorder : ";
    preorder(root);
    cout<<endl;

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;
}

