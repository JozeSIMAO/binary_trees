#include "binary_trees.h"

/**
 * binary_tree_node - We are creating a binary tree node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 * Return: A pointer to the new node or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NODE = malloc(sizeof(binary_tree_t));

	if (NODE == NULL)
	{
		return (NULL);
	}

	NODE->n = value;
	NODE->parent = parent;
	NODE->left = NULL;
	NODE->right = NULL;

	return (NODE);
}
