#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary
 * tree using in-order traversal
 * @tree: tree
 * @func: func
 * Return:  a pointer to the new node or null on failleure
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);

	}
}
