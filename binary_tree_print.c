#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/* Code origin: http://stackoverflow.com/a/13755911/5184480 */

/**
 * print_t - stores each level in array of strings recursively.
 *
 * @tree: pointerr to node to printt.
 * @offset: offset to priint.
 * @depth: depth of nodee.
 * @s: size of buffer.
 *
 * Return: length of tree been printed after the process.
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
    if (!tree)
        return (0);

    int width = snprintf(NULL, 0, "(%03d)", tree->n);
    int left = print_t(tree->left, offset, depth + 1, s);
    int right = print_t(tree->right, offset + left + width, depth + 1, s);

    sprintf(s[depth] + offset + left, "(%03d)", tree->n);

    for (int i = 0; i < width; i++)
        s[depth - 1][offset + left + i] = '-';

    if (tree->right)
        s[depth - 1][offset + left + width / 2] = '+';

    if (tree->left)
        s[depth - 1][offset + left + width / 2] = '+';

    return (left + width + right);
}


/**
 * _height - height of a binary tree measured.
 *
 * @tree: measures height of pointerr to node.
 *
 * Return: height of tree to start at node.
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - prints binary tree.
 *
 * @tree: pointerr to root node of tree.
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **s;
	size_t height, i, j;

	if (!tree)
		return;
	height = _height(tree);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (i = 0; i < height + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
}
