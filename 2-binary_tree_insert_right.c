#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node.
 * @parent: Pointer to the node to insert the right child in.
 * @value: Value to store in the new node.
 * Return: A pointer to the created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *NODE;

    if (parent == NULL)
        return (NULL);

    NODE = malloc(sizeof(binary_tree_t)); /*Allocate memory for NODE and return null upon memeory allocation failure*/
      
    if (NODE == NULL)
        return (NULL);

    NODE->n = value;  /* We must set the value for NODE*/
    NODE->parent = parent;
    NODE->left = NULL;

    if (parent->right != NULL)
    {
        
        NODE->right = parent->right; /*If the parent already has a right child, move it to be the right child of the new node*/
        parent->right->parent = NODE;/*Update the parent of the old right child*/ 
    }

    parent->right = NODE;  /*Set the new node as the right child of the parent*/ 

    return (NODE);/*Return a pointer */
}
