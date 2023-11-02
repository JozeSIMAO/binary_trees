#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a NODE in a binary tree.
 * @NODE: Pointer to the NODE to find the sibling.
 * Return: A pointer to the sibling NODE, or NULL if no sibling is found.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *NODE)
{
    if (NODE == NULL || NODE->parent == NULL)
        return (NULL);

    binary_tree_t *parent = NODE->parent;

    if (parent->left && parent->left != NODE)
        return (parent->left);
    if (parent->right && parent->right != NODE)
        return (parent->right);
    else return (NULL);
}