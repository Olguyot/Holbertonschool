#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling
 * @node: the node
 * Return: Sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	tmp = node->parent;
	if (tmp->left == node)
		return (tmp->right);
	return (tmp->left);
}
