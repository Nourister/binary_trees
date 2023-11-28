#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, n = 0, i = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = binary_tree_size(tree->left);
		n = binary_tree_size(tree->right);
		size = n + i + 1;
	}
	return (size);
}
