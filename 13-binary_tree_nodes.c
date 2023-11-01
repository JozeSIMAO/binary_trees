#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes.
 * Return: Number of nodes with at least one child or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left || tree->right)
    /*We will now count the nodes in the left and right subtree*/
    {
        size_t l_node = binary_tree_nodes(tree->left);
        size_t r_node = binary_tree_nodes(tree->right);
        return (1 + l_node + r_node);
    }

    return (0);
}
