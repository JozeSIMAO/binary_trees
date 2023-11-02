#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 * Return: A pointer to the sibling node, or NULL if no sibling is found.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left && parent->left != node)
		return (parent->left);
	if (parent->right && parent->right != node)
		return (parent->right);
	else
		return (NULL);
}
