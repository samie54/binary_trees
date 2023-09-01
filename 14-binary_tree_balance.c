#include "binary_trees.h"

/**
 * rheight - height of binary tree.
 * @tree: tree hieght.
 * Return: int value.
 */
size_t rheight(const binary_tree_t *tree)
{
	size_t p = 0;
	size_t q = 0;

	if (tree == NULL)
		return (0);
	p = rheight(tree->left);
	q = rheight(tree->right);
	if (p > q)
		return (p + 1);
	return (q + 1);
}

/**
 * binary_tree_height - calling of rheight.
 * @tree: tree called.
 * Return: int value.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (rheight(tree) - 1);
}

/**
 * binary_tree_balance - measures balance factor of binary tree.
 * @tree: tree hieght measured.
 * Return: int value.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
