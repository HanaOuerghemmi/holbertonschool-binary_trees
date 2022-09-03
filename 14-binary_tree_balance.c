#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: the tree
 * Return: 0 or the balnce  measres
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	else
		return (0);

}

/**
 * binary_tree_height -a function that measures the height of a binary tree
 * @tree: tree
 * Return: a pointer to the new node or null on failleure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)

		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l >= r)
		return (l + 1);
	else
		return (r + 1);

}

