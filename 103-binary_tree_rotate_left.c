#include "binary_trees.h"

/**
 * binary_tree_rotate_left - does left-rotation on bianry.
 * @tree: tree to rotate.
 * Return: pointerr.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_node;

	if (tree == NULL || tree->right == NULL)
		return (tree);
	new_node = tree->right;
	if (new_node->left)
	{
		new_node->left->parent = tree;
		tree->right = new_node->left;
	}
	else
	{
		tree->right = NULL;
	}
	new_node->left = tree;
	new_node->parent = tree->parent;
	tree->parent = new_node;
	return (new_node);
}
