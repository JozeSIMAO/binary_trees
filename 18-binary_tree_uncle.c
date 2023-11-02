#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 * Return: A pointer to the uncle node, or NULL if no uncle is found.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);

    binary_tree_t *parent = node->parent;
    binary_tree_t *old_parent = parent->parent;

    if (old_parent->left && old_parent->left == parent)
    {
        if (old_parent->right)
            return (old_parent->right);
    }
    else if (old_parent->right && old_parent->right == parent)
    {
        if (old_parent->left)
            return (old_parent->left);
    }
    return (NULL);
}
