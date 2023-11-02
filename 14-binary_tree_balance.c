#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: Balance factor of the tree or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    int left_height = binary_tree_height(tree->left);/*Height of the left and right subtree*/
    int right_height = binary_tree_height(tree->right);
    return (left_height - right_height); /*Calculate and return the balance factor*/
}
