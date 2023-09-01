#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks leaf in binary tree.
 * @node: node to be checked.
 * Return: int value.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int new_node = 0;

	if (node && !(node->left) && !(node->right))
		new_node = 1;
	return (new_node);
}

/**
 * binary_tree_leaves - counts leaves in binary tree.
 * @tree: tree to be counted.
 * Return: int value.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
