#include "binary_trees.h"

/**
 * binary_tree_is_leaf - node equals leaf.
 * @node: pointerr.
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
 * parentfull - node equals parent.
 * @node: pointerr.
 * Return: int value.
 */
int parentfull(const binary_tree_t *node)
{
	int q = 0;

	if (node && node->left && node->right)
		q = 1;
	return (q);
}

/**
 * binary_tree_is_full - checks if binary is full.
 * @tree: tree to be checked.
 * Return: int value.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (1);
	if (parentfull(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
