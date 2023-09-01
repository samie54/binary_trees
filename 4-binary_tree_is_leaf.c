#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if nodee is leaf.
 * @node: node checked.
 * Return: int value.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int new_node = 0;

	if (node && !(node->left) && !(node->right))
		new_node = 1;
	return (new_node);
}
