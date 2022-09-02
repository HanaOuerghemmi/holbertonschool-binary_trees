#include "binary_trees.h"
/**
 * binary_tree_insert_left - function inserts the left-child of another node
 * @parent: node parent
 * @value: value to add
 * Return:  a pointer to the new node or null on failleure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;
	(void)value;

	if (parent == NULL)
	{
		return(NULL);
	}
	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		parent->left->parent = tmp;
	}
	parent->left = tmp;
	return (tmp);
}
