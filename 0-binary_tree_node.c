#include "binary_trees.h"

/**
 * binary_tree_node - We are creating a binary tree node.
 * @parent: A pointer to the parent node.
 * @value: The value to put in the new node.
 * Return: A pointer to the new node or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
   
    binary_tree_t *NODE = malloc(sizeof(binary_tree_t)); /* We first need to allocate memory for a new binary tree node using malloc and sizeof */
/* We then must check if the memorry allocation was successful, if not, it will return NULL*/
    if (NODE == NULL) {
        return (NULL);
    }
    NODE->n = value; /* Now we must set a new value for NODE*/
    NODE->parent = parent; /*Set the parent pointer of NODE*/ 
    NODE->left = NULL; /*We must now Initialize the left child pointer and the right child pointer to NULL */
    NODE->right = NULL;
    return (NODE); /* Finally we can return NODE*/
}