#include "binary_trees.h"

/**
 * rdepth - measures depth of binary tree node.
 * @tree: tree depth.
 * Return: 0; if tree is NULL.
 */
size_t rdepth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (rdepth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calling rdepth.
 * @tree: tree depth.
 * Return: 0; when NULL.
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (rdepth(tree));
}
