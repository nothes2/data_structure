#include "stdio.h"
#include "string.h"
#include "header/binary_tree.h"

int main(int argc, char **argv)
{
    Node *root = NULL;
    int nodes[] = {50, 30, 58, 45, 26, 98, 42};

    size_t nodeCount = sizeof(nodes) / sizeof(nodes[0]);
    for (size_t i = 0; i < nodeCount; ++i)
    {
        root = insertNode(root, nodes[i]);
    }

    printf("In-order traversal of the binary tree: \n");
    inorderTraversal(root);
    printf("\n");

    printf("Pre-order traversal of the binary tree: \n");
    preorderTraversal(root);
    printf("\n");

    printf("Post-order traversal of the binary tree: \n");
    postorderTraversal(root);
    printf("\n");

    return 0;
}
