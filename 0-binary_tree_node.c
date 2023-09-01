#include "binary_trees.h"

/**
 * binary_tree_node - creates biinary tree node.
 * @value: node value.
 * @parent:parent nodee.
 * Return: pointerr.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *a;

	a = malloc(sizeof(binary_tree_t));
	if (a == NULL)
		return (NULL);
	a->parent = parent;
	a->n = value;
	a->right = NULL;
	a->left = NULL;
	return (a);
}
