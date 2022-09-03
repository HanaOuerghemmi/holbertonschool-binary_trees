#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: the tree
 * Return: 0 if null else the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) +
				binary_tree_size(tree->right) + 1);
	else
		return (0);
}
