#include "binary_trees.h"

/**
 * binary_tree_is_Leaf - cheacks to see if a node is leaf
 * @node: node to be checked
 *
 * Return: 1 if leaf, 0 if else
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}
