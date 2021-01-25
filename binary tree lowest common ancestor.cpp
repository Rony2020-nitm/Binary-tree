#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;

    Node *left;

    Node *right;
};

Node *create_node( )
{
    int x;

    Node *new_node;

    new_node = new Node;

    new_node->left = 0;

    new_node->right = 0;

    cout << "\n\nEnter the data: ";

    cin >> x;

    if(x == -1){

        return 0;
    }

    new_node->data = x;

    cout << "\nEnter the left child of : " << x;

    new_node->left = create_node( );

    cout << "\nEnter the right child of x : " << x;

    new_node->right = create_node( );

    return new_node;

}

void inorder(Node *root)
{
    if(root  == NULL){

        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}
int main( )
{
    Node *root;

    root = 0;

    root = create_node( );

    cout << "\nInorder traversal is : ";

    inorder(root);

}
