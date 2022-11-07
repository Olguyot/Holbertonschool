#include "binary_trees.h"

/**
  * binary_tree_is_root - binary_tree_is_root check if it's a root
  * @node: check the pointer
  * Return: 0 false, 1 true
  **/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	else
		return (1);
}
