#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;

    Node *left;

    Node *right;
};

Node *create( )
{
    int x;

    Node *new_node;

    new_node = new Node;

    cout << "\nEnter the data: ";

    cin >> x;

    if(x == -1){

        return 0;

    }

    new_node->data = x;

  cout << "\nEnter the data of the of left child of : " << x << endl;

    new_node->left = create( );

    cout << "\nEnter the data of the of right child of : " << x << endl;

    new_node->right = create( );

    return new_node;

}

void inorder(Node *root)
{
    if(root == 0)
    {
        return;
    }

    else{

        inorder(root->left);

        cout << root->data << " ";

        inorder(root->right);
    }
}

int tree_height(Node *root)
{
    if(root == NULL){

        return 0;
    }

    int hleft = tree_height(root->left);

    int hright = tree_height(root->right);

    if(hleft > hright){

        return (hleft + 1);
    }

    else{

        return (hright + 1);

    }

}

int main( )
{
    Node *root;

    root = 0;

    root = create( );

    cout << "\ninorder traversal: ";

    inorder(root);

    cout << "\n";

    int h = tree_height(root);

    cout << "\nHeight of the binary tree: " << h;

    return 0;
}
