#include "binary_trees.h"

/**
 * is_BST - compare nodes to check if valid bst
 * @tree: pointer to root of tree
 * @min: minimum values
 * @max: maximum values
 *
 * Return: 1 if success, 0 othrwise
 */
int is_BST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		is_BST(tree->left, min, tree->n - 1) &&
		is_BST(tree->right, tree->n +1, max)
		);
}

/**
 * binary_tree_is_bst - checks if is BST
 *
 * @tree: pointer to root of tree
 *
 * Return: 1 if pass, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_BST(tree, INT_MIN, INT_MAX));
}
