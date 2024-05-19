#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node *createNode(int data);

Node *insertNode(Node* root, int data);

Node *searchNode(Node* root, int data);

void inorderTraversal(Node* root);

void preorderTraversal(Node* root);

void postorderTraversal(Node* root);

void freeTree(Node* root);
#endif 
