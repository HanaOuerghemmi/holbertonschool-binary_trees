#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the sibling of a node
 * @node: the node
 * Return: NULL or the pointer to the node to find the sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandPa;

	if (!node)
		return (NULL);
	parent = node->parent;

	if (!parent)
		return (NULL);

	grandPa = parent->parent;
	if (!grandPa)
		return (NULL);

	if (grandPa->left != parent)
		return (grandPa->left);
	return (grandPa->right);

}
