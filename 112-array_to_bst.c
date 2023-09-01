#include "binary_trees.h"

/**
 * array_to_bst - binary search tree built from array.
 * @array: Pointerr to  first element of array conversion.
 * @size: Number of elements.
 *
 * Return: Pointerr to root node of BST; or NULL if fail.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
