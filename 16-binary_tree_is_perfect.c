#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /*If the current node has both left and right children, recursively check*/
    if (tree->left && tree->right)
    {
        int left_perfect = binary_tree_is_perfect(tree->left);
        int right_perfect = binary_tree_is_perfect(tree->right);
        return left_perfect && right_perfect;
    }
    return (0);
}
