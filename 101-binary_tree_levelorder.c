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
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
		return (0);
	a = rheight(tree->left);
	b = rheight(tree->right);
	if (a > b)
		return (a + 1);

	return (b + 1);
}
/**
 * binary_tree_levelorder - prints informatiion.
 * @tree: tree info.
 * @func: pointerr.
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t x;
	size_t y;

	if (tree == NULL || func == NULL)
		return;

	x = rheight(tree);

	for (y = 1; y <= x; y++)
		plevel(tree, y, func);
}
