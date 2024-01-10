#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tre is full
 * @tree: pointer to root
 *
 * Return: 1 if true 0 if fail
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree || !tree->left)
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
