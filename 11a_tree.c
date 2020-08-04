#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
    int number;
} node_data_t;

typedef struct node
{
    node_data_t data;
    struct node *left;
    struct node *right;
} tree_node_t;

tree_node_t *newNode(int newData)
{
    tree_node_t *node = (tree_node_t *)malloc(sizeof(tree_node_t));
    node->data.number = newData;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void visit(tree_node_t *node)
{
    printf("%d ", node->data.number);
}

void preorder(tree_node_t *node)
{
    if (node != NULL)
    {
        visit(node);
        preorder(node->left);
        preorder(node->right);
    }
}

int main()
{
    tree_node_t *root = newNode(8);
    root->left = newNode(3);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    root->right = newNode(10);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);

    printf("preorder: ");
    preorder(root);
    printf("\n");


    return 0;
}