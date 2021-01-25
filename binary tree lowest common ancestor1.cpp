#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;

    Node *left;

    Node *right;
};

Node *create_node(int x)
{
    Node *new_node;

    new_node = new Node;

    new_node->data = x;

    new_node->left = new_node->right = 0;

    return new_node;
}

Node *findLCA(Node *root, int n1, int n2)
{
    if(root == NULL){

        return NULL;
    }

     if(root->data == n1 || root->data == n2){

        return root;
    }

    Node *l = findLCA(root->left, n1, n2);

    Node *r = findLCA(root->right, n1, n2);

     if(l && r){

        return root;

    }

    Node *nod = (l != 0)  ? l : r;

    return nod;
}

int main( )
{
    Node *root;

    root = NULL;

    root = create_node(1);

    root->left = create_node(2);

    root->right = create_node(3);

    root->left->left = create_node(4);

    root->left->right = create_node(5);

    root->right->left = create_node(6);

    root->right->right = create_node(7);

    Node *lca = findLCA(root, 4, 5);

    cout << lca->data << endl;

    return 0;
}
