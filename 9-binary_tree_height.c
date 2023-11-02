#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Height of the tree or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);  

    size_t l_height = binary_tree_height(tree->left);   /* Getting height of the left subtree*/
    size_t r_height = binary_tree_height(tree->right);  /* Getting height of the right subtree*/

    if (l_height > r_height)
        return (l_height + 1); 
    else
        return (r_height + 1);
}