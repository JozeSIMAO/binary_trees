#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a root, 0 otherwise or if node is NULL.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);  /* If node is NULL, return 0 */
    if (node->parent == NULL)
        return (1);  /*If node has a parent, it's not a root, so return 0 */
    else
    return (0);  /*If no parent, it's a root, so return 1*/
}
