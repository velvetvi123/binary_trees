#include "binary_trees.h"

/**
 * binary_tree_depth - it measure a node's depth in a binary tree
 * @tree: Pointer to the node to measure depth
 * Return: Depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
