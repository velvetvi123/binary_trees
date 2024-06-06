#include "binary_trees.h"

/**
 * binary_tree_is_root to check if the given node is a root
 * @node: A Pointer to the node we want to check.
 * Return: 1 if node is a root,if not return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
