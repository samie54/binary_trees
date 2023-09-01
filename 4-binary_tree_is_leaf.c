#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if nodee is leaf.
 * @node: node checked.
 * Return: int value.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (false);
    if (node->left == NULL && node->right == NULL)
        return (true);
    return (false);
}
