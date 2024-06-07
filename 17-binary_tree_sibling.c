#include "binary_trees.h"

/**
 * binary_tree_sibling - it finds sibling of a node
 * @node: Pointer to the node in goal to find the sibling
 *
 * Return: Pointer to the sibling node,Otherwise NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
