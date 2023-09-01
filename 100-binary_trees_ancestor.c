#include "binary_trees.h"

/**
 * rdepth - depth of node of binary tree.
 * @tree: tree depth.
 * Return: node depth.
 **/
size_t rdepth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (rdepth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calling rdepth.
 * @tree: tree depth.
 * Return: depth of node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (rdepth(tree));
}

/**
 * binary_trees_ancestor - finds lowest common ancestors.
 * @second: pointer to node.
 * @first: pointer to node.
 * Return: pointerr.
 **/
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first,
	const binary_tree_t *second
)
{
	if (second == NULL || first == NULL)
		return (NULL);
	if (second == first)
		return ((binary_tree_t *)first);
	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));
	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));
	return (binary_trees_ancestor(first->parent, second->parent));
}
