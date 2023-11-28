#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the leaves.
 *
 * Return: Number of leaves in the tree. If tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, j = 0, k = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		j = binary_tree_leaves(tree->left);
		k = binary_tree_leaves(tree->right);
		leaf = j + k;
		return ((!j && !k) ? leaf + 1 : leaf + 0);
	}
}
