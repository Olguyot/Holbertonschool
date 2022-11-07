#include "binary_trees.h"

/**
  * binary_tree_size - measure size
  * @tree: is a pointer to the root node of the tree to delete
  * Return: size
  **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cp = 0;

	if (!tree)
	{
		return (0);
	}
	cp += 1;
	cp += binary_tree_size(tree->left);
	cp += binary_tree_size(tree->right);
	return (cp);
}
