#include "binary_trees.h"
/**
 * binary_tree_preorder - function checks if a node is a leaf
 * @tree: tree
 * @func: func
 * Return:  a pointer to the new node or null on failleure
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	}
}
