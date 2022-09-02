#include "binary_trees.h"
/**
 * binary_tree_is_root - function  that checks if a given node is a root
 * @node: node
 * Return:  a pointer to the new node or null on failleure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
