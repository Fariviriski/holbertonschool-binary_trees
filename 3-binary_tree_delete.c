#include "binary_trees.h"

/**
 * binary_tree_delete - delet entire tree
 * @tree: tree for the choppin blovk
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_de;ete(tree->right);

	free(tree);
}
