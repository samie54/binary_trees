#include "binary_trees.h"

/**
 * array_to_heap - Max Binary Heap tree from array built.
 * @array: Pointerr to first element of array.
 * @size: number of elementt.
 *
 * Return: Pointer to root node of Binary Heap or 
 *         NULL if it fails.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
