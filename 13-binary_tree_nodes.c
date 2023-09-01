#include "binary_trees.h"

/**
 * binary_tree_is_parent - parent node.
 * @node: node to be count.
 * Return: int value.
 */
int binary_tree_is_parent(const binary_tree_t *node)
{
	int new_node = 0;

	if (node && (node->left || node->right))
		new_node = 1;
	return (new_node);
}

/**
 * binary_tree_nodes - counts node with 1 least child in a binary tree.
 * @tree: tree to be counted.
 * Return: int value.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
