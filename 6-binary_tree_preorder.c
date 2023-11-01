#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *        The value in the node is passed as a parameter to this function.
 */
 
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;  /*If tree or func is NULL, return nothing */

    func(tree->n);  /*We must call the provided function with the value of the current node*/

    binary_tree_preorder(tree->left, func);   /* Recursively traverse the left subtree */
    binary_tree_preorder(tree->right, func);  /* Recursively traverse the right subtree */
}
