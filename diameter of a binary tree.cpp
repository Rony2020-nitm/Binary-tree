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

int height(Node *root)
{
    if(root == NULL){

        return 0;
    }

    int l = height(root->left);

    int r = height(root->right);

    return max(l, r) + 1;
}

int find_diameter(Node *root)
{
    if(root == NULL){

        return 0;
    }

    int lh = height(root->left);

    int rh = height(root->right);

    int ld = find_diameter(root->left);

    int rd = find_diameter(root->right);

    return max(rh + lh + 1, max(ld, rd));
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

    int d = find_diameter(root);

    cout << "\nThe diameter is: " << d;

    return 0;
}
