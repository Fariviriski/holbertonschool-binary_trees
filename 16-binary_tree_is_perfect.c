#include "binary_trees.h"
/**
 * comp_depth - compares depth of 2 nodes
 * @tree: pointer to root
 *
 * Return: size
 */
int comp_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (comp_depth(tree->left) + 1 + comp_depth(tree->right));
}

/**
 * binary_tree_is_perfect - checks to see if its a perfect tree
 * @tree: pointer to root node
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_left = comp_depth(tree->left);
	h_right = comp_depth(tree->right);

	if ((h_left - h_right) == 0)
		return (1);
	return (0);
}
