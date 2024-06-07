#include "binary_trees.h"

/**
 * binary_tree_size - it measure a binary tree's size
 * @tree: Pointer to the root node of the tree for measuring the size
 *
 * Return: size of the tree, otherwise 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
}
