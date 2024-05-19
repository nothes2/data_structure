/*
 * @filename: binary_tree.h
 * @description: This is the source file for the binary tree data structure.
 *               It is used for implementing the details of binary tree algorithms.
 * @author Nothes
 * @date 2024 - 05 / 17
 */

#include "../header/binary_tree.h"
#include <stdio.h>
#include <stdlib.h>

Node *createNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node)
    {
        printf("memory allcation error. \n");
        exit(1);
    }

    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *insertNode(Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

Node *searchNode(Node *root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }

    if (data < root->data)
    {
        return searchNode(root->left, data);
    }
    return searchNode(root->right, data);
}

void inorderTraversal(Node *root)
{
    if (root != NULL)
    {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node *root)
{
    if (root != NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void freeTree(Node *root)
{
    if (root != NULL)
    {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}