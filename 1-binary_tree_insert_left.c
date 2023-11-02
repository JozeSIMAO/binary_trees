#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: Pointer to the node to insert the left child in.
 * @value: Value to store in the new node.
 * Return: A pointer to the created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NODE = NULL;

	if (parent == NULL)
		return (NULL);
	NODE = malloc(sizeof(binary_tree_t));

	if (NODE == NULL)
		return (NULL);

	NODE->parent = parent;
	NODE->n = value;
	NODE->left = NULL;

	if (parent->left != NULL)
	{
		NODE->left = parent->left;
		parent->left->parent = NODE;
	}
	parent->left = NODE;

	return (NODE);
}
