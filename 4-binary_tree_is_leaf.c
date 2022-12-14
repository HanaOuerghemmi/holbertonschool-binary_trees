#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function checks if a node is a leaf
 * @node: node
 * Return:  a pointer to the new node or null on failleure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL || node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
