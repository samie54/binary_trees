#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if nodee is leaf.
 * @node: node checked.
 * Return: int value.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int a = 0;

	if (node && !(node->left) && !(node->right))
		a = 1;
	return (a);
}
