#include "binary_trees.h"

/**
 * binary_tree_is_leaf to check if a node is leaf
 * @node: Pointer to the node we want to check
 * Return: 1 if a node is a leaf, if its not return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
