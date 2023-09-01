#include "binary_trees.h"

/**
 * plevel - prints nodes of binary tree.
 * @level: level of binary tree node.
 * @func: pointerr.
 * @tree: tree of node.
 *
 */
void plevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		plevel(tree->left, level - 1, func);
		plevel(tree->right, level - 1, func);
	}
}
/**
 * rheight - heightt of binary tree.
 * @tree: tree height.
 * Return: height value.
 */
size_t rheight(const binary_tree_t *tree)
{
	size_t u = 0;
	size_t v = 0;

	if (tree == NULL)
		return (0);
	u = rheight(tree->left);
	v = rheight(tree->right);
	if (u > v)
		return (u + 1);

	return (v + 1);
}
/**
 * binary_tree_levelorder - prints informatiion.
 * @tree: tree info.
 * @func: pointerr.
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i;
	size_t j;

	if (tree == NULL || func == NULL)
		return;

	i = rheight(tree);

	for (j = 1; j <= i; j++)
		plevel(tree, j, func);
}
