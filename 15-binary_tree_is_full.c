#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left != NULL && tree->right != NULL)
    {
        /* Check if left and right subtree is full*/
        int left_full = binary_tree_is_full(tree->left);
        int right_full = binary_tree_is_full(tree->right);
        return (left_full && right_full);
    }
    return (0);
}
