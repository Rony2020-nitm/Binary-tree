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

  cout << "\nEnter the data of the of left child of : " << x;

    new_node->left = create( );

    cout << "\nEnter the data of the of right child of : " << x;

    new_node->right = create( );

    return new_node;

}

void postorder(Node *root)
{
    if(root == 0)
    {
        return;
    }

    else{

        postorder(root->left);

        postorder(root->right);

      cout << root->data << " ";
    }

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

void preorder(Node *root)
{
    if(root == 0)
    {
        return;
    }

    else{

        cout << root->data << " ";

        preorder(root->left);

        preorder(root->right);
    }
}

int main( )
{
    Node *root;

    root = 0;

    root = create( );

    cout << "\nPreorder traversal: ";

    preorder(root);

    cout << endl;

    cout << "\nPostorder traversal: ";

    postorder(root);

    cout << endl;

    cout << "\ninorder traversal: ";

    inorder(root);

    return 0;
}
