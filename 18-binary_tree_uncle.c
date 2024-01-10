#include "binary_trees.h"

/**
 * srch_uncl - searches for uncle node
 * @node: nephew/niece node
 *
 * Return: pointer to uncle
 */
binary_tree_t *srch_uncl(binary_tree_t *node)
{
	binary_tree_t *gramps = NULL;

	if (!node || !(node->parent))
		return (NULL);

	gramps = node->parent;
	if (gramps->left && (gramps->left != node))
		return (gramps->left);

	if (gramps->right && (gramps->right != node))
		return (gramps->right);

	return (NULL);
}

/**
 * binary_tree_uncle - finds uncle of node
 * @node: nephes node
 *
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (srch_uncl(node->parent));
}
