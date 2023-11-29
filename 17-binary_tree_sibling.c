#include "binary_trees.h"

/**
 * binary_tree_sibling - Find and return the sibling of a binary tree node.
 *
 * @node: A pointer to the node for which the sibling is sought.
 *
 * Return: A pointer to the sibling node, NULL if no sibling or @node is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
