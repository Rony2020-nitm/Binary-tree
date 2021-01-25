#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}

void preorder(struct node *root) {
  if (root != NULL) {
    printf("%d -> ", root->key);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(struct node *root) {
  if (root != NULL) {
    postorder(root->left);
    postorder(root->right);
    printf("%d -> ", root->key);
  }
}



// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}


int main() {
  struct node *root = NULL;
  int val;
  printf("Enter the value of the root node: ");
  scanf("%d",&val);
  root = insert(root,val);
  printf("\n\n");
  int flag=1;

  while(flag==1) {
    flag=1;
    printf("\n\nEnter the value to insert: ");
    scanf("%d",&val);
    root = insert(root,val);
    printf("\n\nDo you wish to insert more values? (1 for yes)");
    scanf("%d",&flag);
}

  printf("Inorder traversal: ");
  inorder(root);

  printf("\n\nPreorder traversal: ");
  preorder(root);

  printf("\n\nPostorder traversal: ");
  postorder(root);

  printf("\n\n")


}

