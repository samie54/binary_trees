#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if givenn noce is root.
 * @node: pointerr to node checked.
 * Return: int value.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int new_node = 0;

	if (node && !(node->parent))
		new_node = 1;
	return (new_node);
}
