#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: Pointer to the node to insert the left child in.
 * @value: Value to store in the new node.
 * Return: A pointer to the created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *NODE = NULL;  /* We firstly need to create a pointer to the left child*/

    if (parent == NULL)
        return (NULL); /*Will return NULL if parent is NULL*/

    NODE = malloc(sizeof(binary_tree_t));  /* Now allocate memory to NODE*/
    if (NODE == NULL)
        return (NULL);  /* Returns NULL should memomry allocation fails*/

    NODE->parent = parent;
    NODE->n = value;  /* We are now setting a value for the new node*/
    NODE->left = NULL;

    if (parent->left != NULL) /* If the parent already has a left child, move it to be the left child of the new node */
    {
        NODE->left = parent->left;
        parent->left->parent = NODE;  /* We must update the parent of the old left child */
    }
    parent->left = NODE;  /* We must then set the new node as the left child of the parent */

    return (NODE);  /* Finally, we can return a pointer to the created node */
}
