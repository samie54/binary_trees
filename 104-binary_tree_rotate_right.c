#include "binary_trees.h"

/**
 * binary_tree_rotate_right - does right-rotation on binary.
 * @tree: tree root to be rotated.
 * Return: pointerr.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_node;

	if (tree == NULL || tree->left == NULL)
		return (tree);
	new_node = tree->left;
	if (new_node->right)
	{
	new_node->right->parent = tree;
	tree->left = new_node->right;
	}
	else
	{
	tree->left = NULL;
	}
	new_node->right = tree;
	new_node->parent = tree->parent;
	tree->parent = new_node;
	return (new_node);
}
