#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: Pointer to the lowest common ancestor node or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return (NULL);

    if (first == second)
        return ((binary_tree_t *)first);

    binary_tree_t *lowest_common_ancestor = NULL;
    const binary_tree_t *first_parent = first;
    while (first_parent != NULL)
    {
        const binary_tree_t *second_parent = second;
        while (second_parent != NULL)
        {
            if (first_parent == second_parent)
                lowest_common_ancestor = (binary_tree_t *)first_parent;
            second_parent = second_parent->parent;
        }
        first_parent = first_parent->parent;
    }
    return lowest_common_ancestor;
}