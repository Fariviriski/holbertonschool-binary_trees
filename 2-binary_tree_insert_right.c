#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts note as a right childee
 * @parent: pointer to prev node
 * @value: value to be used fro insertion
 *
 * Return: pointr to created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;

	if (parent->right == NULL)
	{
		new->parent = parent;
		new->right = NULL;
		parent->right = new;
	}
	else
	{
		new->parent = parent;
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}
	return (new);
}
