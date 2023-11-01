#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @NODE: Pointer to the node to check.
 * Return: 1 if node is a leaf, 0 otherwise or if node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (NODE == NULL)
        return (0);  /*If node is NULL, must return 0*/
    else
    {
        if (NODE->left == NULL && NODE->right == NULL)
            return (1);  /* Return 1 if node is a leaf */
        else
            return (0);  /*Return 0 if node is not a leaf*/
    }
}
