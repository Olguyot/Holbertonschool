#include "binary_trees.h"

/**
  * binary_tree_nodes -  counts the nodes with at least 1 child
  * @tree: is a pointer to the root node of the tree
  *
  * Return: number of nodes (size_t), if tree is NULL returns 0
  **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes = 0;

	if (!tree)
		return (0);
	if (tree && tree->left && tree->right)
	{
		count_nodes += 1 + binary_tree_nodes(tree->left);
		count_nodes += binary_tree_nodes(tree->right);
	}
	if (tree && tree->right && !tree->left)
		count_nodes += 1 + binary_tree_nodes(tree->right);
	if (tree && !tree->right && tree->left)
		count_nodes += 1 + binary_tree_nodes(tree->left);

	return (count_nodes);
}

