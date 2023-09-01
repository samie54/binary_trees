#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Checks if binary tree is valid bst.
 * @tree: Pointerr to root node of tree to be checked.
 * @lo: Value of smallest node visitedd afar.
 * @hi: Value of largest node visitedd  afar.
 *
 * Return: 1, if BST is valid or 0 if otherwise.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Checks if binary tree is validd bst.
 * @tree: Pointerr to root node of tree to be checked.
 *
 * Return: 1 if tree is valid Binary Search Tree, or 0; if otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
