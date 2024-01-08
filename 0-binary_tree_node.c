#include "binary_trees.h"

/**
 * binary_tree_node - function to create a new node on a binary tree
 * @parent: pointer to parent node
 * @value: value to be added to the tree
 *
 * Return: a new node with the value added
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

