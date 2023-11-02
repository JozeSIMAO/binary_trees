#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of another node.
 * @parent: Pointer to the node to insert the right child in.
 * @value: Value to store in the new node.
 * Return: A pointer to the created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NODE;

	if (parent == NULL)
		return (NULL);

	NODE = malloc(sizeof(binary_tree_t));

	if (NODE == NULL)
		return (NULL);

	NODE->n = value;
	NODE->parent = parent;
	NODE->left = NULL;

	if (parent->right != NULL)
	{
		NODE->right = parent->right;
		parent->right->parent = NODE;
	}
	parent->right = NODE;

	return (NODE);
}
