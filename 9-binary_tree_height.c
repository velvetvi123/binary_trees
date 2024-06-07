#include "binary_trees.h"

/**
 * binary_tree_height -  It measure the a binary tree's height 
 * @tree: Pointer to the root node of the tree to traverse
 * Return:tree's height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0;
		int right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
