#include "binary_trees.h"

/**
  * is_full - recursively checks if a tree is full
  * @tree: the tree to check
  * Return: 1 if full, 0 otherwise
  **/
int	is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (is_full(tree->left) && is_full(tree->right));
}

/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree: is a pointer to the root node of the tree to check
  * Return: 1 if full 0 therwise
  **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full(tree));
}
