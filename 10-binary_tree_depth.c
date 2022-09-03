#include "binary_trees.h"
/**
 * binary_tree_depth -a function that measures the height of a binary tree
 * @tree: tree
 * Return: a pointer to the new node or null on failleure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)

		return (0);
	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	depth++;
	return (depth);

}

