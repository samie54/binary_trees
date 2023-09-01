#include "binary_trees.h"

/**
 * binary_tree_preorder - preoder transversal binary.
 * @tree: tree tranversal.
 * @func: pointerr.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
