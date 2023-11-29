#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a binary tree node.
 *
 * @node: A pointer to the node for which the uncle is sought.
 *
 * Return: A pointer to the uncle node, NULL if @node is NULL or has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (NULL);
	}
}
