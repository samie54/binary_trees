#include "binary_trees.h"

/**
 * binary_tree_node - creates biinary tree node.
 * @value: node value.
 * @parent:parent nodee.
 * Return: pointerr.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *v;

	v = malloc(sizeof(binary_tree_t));
	if (v == NULL)
		return (NULL);
	v->parent = parent;
	v->n = value;
	v->right = NULL;
	v->left = NULL;
	return (v);
}
