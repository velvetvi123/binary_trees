#include "binary_trees.h"

/**
 * binary_tree_inorder - iterates the binary tree by using the in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for every node
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, *func);
		func(tree->n);
		binary_tree_inorder(tree->right, *func);
	}
}
