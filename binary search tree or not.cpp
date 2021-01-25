#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

vector <int>v;

struct node
{
    int data;

    Node * left;

    Node *right;
};

Node *create_node(int val)
{
    Node *new_node = new Node;

    new_node->data = val;

    new_node->left = new_node->right = 0;

    return new_node;
}

Node *insert_node(Node *root, int val)
{
    if(root == NULL){

        root = create_node( val);

        return root;
    }

    if(val > root->data){

        root->right = insert_node(root->right, val);
    }

    else{

        root->left = insert_node(root->left, val);
    }

    return root;

}

void inorder(Node *root)
{
    if(root == NULL){

        return;
    }

    inorder(root->left);

    v.push_back(root->data);

    inorder(root->right);
}

int main( )
{
    Node *root = 0;

    int data;

    cout << "\nEnter the root: ";

    cin >> data;

    root = insert_node(root, data);

    int flag = 1;

    while(flag == 1){

        cout << "\nEnter the data: ";

        cin >> data;

        root = insert_node(root, data);

        cout << "\nPress 1 to add more node: ";

        cin >> flag;
    }

    cout << "\nInorder traversal: ";

    inorder(root);

    cout << endl;

    auto it = v.begin( );

    while(it != v.end( )){

        cout << *it << " ";

        it++;
    }

    if(is_sorted(v.begin( ), v.end( ))){

        cout << "\nIt is binary search tree";

    }

    else{

        cout << "\nNot a binary search tree";
    }

    return 0;
}
