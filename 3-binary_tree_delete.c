#include "binary_trees.h"
/**
 * binary_tree_delete - function inserts the left-child of another node
 * @tree: value to add
 * Return:  a pointer to the new node or null on failleure
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
