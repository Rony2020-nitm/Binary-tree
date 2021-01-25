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

Node *insertion(Node *root)
{

    if(root == NULL){

        root = create( );

        return root;
    }

    queue<Node *> q;

    q.push(root);

    while(!q.empty( )){

        Node *temp = q.front( );

        q.pop( );

        if(temp->left != NULL){

            q.push(temp->left);
        }

        else{

            temp->left = create( );

            return root;
        }

        if(temp->right != NULL){

            q.push(temp->right);

        }

        else{

            temp->right = create( );

            return root;

        }

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

    Node *n;

     n = insertion(root);

    cout << "\nAfter insertion: ";

    inorder(n);

    return 0;
}

