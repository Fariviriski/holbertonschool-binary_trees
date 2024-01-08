#include "binary_trees.h"

/**
 * binary_tree_preorder - goeas trough tree in pre-order traversals
 * @tree: pointer to root of tree to transverse
 * @func: pointer to func to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree) || !(func))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
