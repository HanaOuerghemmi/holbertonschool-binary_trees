#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: the node
 * Return: NULL or the pointer to the node to find the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);

	parent = node->parent;

	if (!parent)
		return (NULL);
	if (parent->right != node)
		return (parent->right);

	return (parent->left);

}
