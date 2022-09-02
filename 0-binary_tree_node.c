#include "binary_trees.h"
/**
 * binary_tree_node - function that create a binary tree node
 * @parent: node parent
 * @value: value to add
 * Return:  a pointer to the new node or null on failleure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);
}
