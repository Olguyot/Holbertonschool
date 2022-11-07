#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1(SUCESS) 0(FAILLURE), if tree is NULL returns 0
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
		return (1);
	return (0);
}
/**
 * preorder_func - traverse the tree using preorder to find the height
 * @tree: the tree to traverse
 * @h: the current height at node
 * Return: the greater height of the tree
 **/
size_t  preorder_func(const binary_tree_t *tree, size_t h)
{
	size_t  a, b;

	if (!tree)
		return (h - 1);
	a = preorder_func(tree->left, h + 1);
	b = preorder_func(tree->right, h + 1);
	return (a > b ? a : b);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (preorder_func(tree, 0));
}
