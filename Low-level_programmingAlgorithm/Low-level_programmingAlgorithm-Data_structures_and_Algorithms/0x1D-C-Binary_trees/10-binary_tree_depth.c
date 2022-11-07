#include "binary_trees.h"

/**
  * binary_tree_depth - goes through a binary tree using in-order traversal
  * @tree: is a pointer to measure the depth
  *
  * Return: depth (size_t), if tree is NULL return 0
  **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count_parent = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		count_parent += 1 + binary_tree_depth(tree->parent);
	return (count_parent);
}

