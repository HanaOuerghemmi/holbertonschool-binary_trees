#include "binary_trees.h"
/**
 * binary_tree_insert_right - function inserts the left-child of another node
 * @parent: node parent
 * @value: value to add
 * Return:  a pointer to the new node or null on failleure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;


	if (parent == NULL)
	{
		return (NULL);
	}
	tmp = binary_tree_node(parent, value); /** create a node in a binary tree*/

	if (tmp == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		parent->right->parent = tmp;
	}

	parent->right = tmp;
	return (tmp);
}
