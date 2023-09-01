#include "binary_trees.h"

/**
 * binary_tree_sibling - sibling a node of binary tree.
 * @node: node finding.
 * Return: pointerr.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node != node->parent->left)
		return (node->parent->left);
	return (node->parent->right);
}

/**
 * binary_tree_uncle - finds uncle of a node.
 * @node: node to be found.
 * Return: pointerr.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
