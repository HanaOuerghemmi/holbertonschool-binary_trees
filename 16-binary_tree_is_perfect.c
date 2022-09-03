#include "binary_trees.h"

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

/**
 * binary_tree_is_perfect - function that check if is a binary tree is perfect
 * @tree: the tree
 * Return: 0 is failuure 1 if true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	/** check if leaf*/
	if (!tree->left && !tree->right)
		return (1);
	/** check if right or left is NULL*/
	if ((!tree->left) || (!tree->right))
		return (0);

	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		if (binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left))
			return (1);

	}
	return (0);


}

