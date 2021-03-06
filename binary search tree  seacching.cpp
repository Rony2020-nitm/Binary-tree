#include <bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node
{
    int data;

    Node *left;

    Node *right;
};

Node *create(int x)
{
    Node *root;

    root = new Node;

    root->data = x;

    root->left = root->right = 0;

    return root;
}

Node *insertion(Node *root, int val)
{
    if(root == NULL)
    {
        root = create(val);

        return root;
    }

    else{

         if(val > root->data){

            root->right = insertion(root->right, val);
         }

         else{

            root->left = insertion(root->left, val);

         }

    }

    return root;
}

void inorder(Node *root)
{
    if(root == NULL){

        return;
    }

   inorder(root->left);

   cout << root->data << " ";

   inorder(root->right);
}

void bst_search(Node *root, int key)
{
    int flag = 1;

    while(flag == 1){

        if(root == NULL){

            cout << "\nTree is empty\n";
    }

    flag = 0;

    }



    if(key > root-data)
}

int main( )
{
    Node *root = NULL;

    int val;

    cout << "\nEnter the root: ";

    cin >> val;

    root = insertion(root, val);

    cout << endl;

    int flag = 1;

    while(flag == 1){

         cout << "\nEnter a value: ";

        cin >> val;

        root = insertion(root, val);

        cout << "\nPress 1 to add more node: ";

        cin >> flag;

    }

    printf("Inorder traversal: ");

    inorder(root);

    int el;

    cout << "\nEnter an element to be searched: ";

    cin >> el;

    bst_search(root, el);

    return 0;
}

