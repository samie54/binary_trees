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
 * height - height of binary tree.
 * @tree: tree height.
 * Return: int value.
 */
int height(const binary_tree_t *tree)
{
	int c = 0;
	int d = 0;

	if (tree == NULL)
		return (-1);
	c = height(tree->left);
	d = height(tree->right);
	if (c > d)
		return (c + 1);
	return (d + 1);
}

/**
 * binary_tree_is_perfect - checks binary tree if perfect.
 * @tree: tree checked.
 * Return: int value.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);
		if (parentfull(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
