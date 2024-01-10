#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures balance factor of tree height
 * @tree: pointer to root of tree
 *
 * Return: height of node NULL if void
 */

int binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height_balance(tree->left);

	if (tree->right)
		h_right = 1 + binary_tree_height_balance(tree->right);

	if (h_left > h_right)
		return (h_left);

	return (h_right);
}


/**
 * binary_tree_balance - checks balance
 * @tree: pointer to root node
 *
 * Return: balance of nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height_balance(tree->left);

	if (tree->right)
		h_right = 1 + binary_tree_height_balance(tree->right);
	return (h_left - h_right);
}
