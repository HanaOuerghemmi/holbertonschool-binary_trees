#include "binary_trees.h"
/**
 * tree_height -a function that measures the height of a binary tree
 * @tree: tree
 * Return: a pointer to the new node or null on failleure
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	if (tree)
	{
		l = tree_height(tree->left);
		r = tree_height(tree->right);
	}
	if (l >= r)
		return (l + 1);
	return (r + 1);
}



/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: the tree
 * Return: 0 or the balnce  measres
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree->left) - tree_height(tree->right));

}


