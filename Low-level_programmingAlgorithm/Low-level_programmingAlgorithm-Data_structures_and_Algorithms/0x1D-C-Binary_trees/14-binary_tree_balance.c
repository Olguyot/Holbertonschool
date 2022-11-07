#include "binary_trees.h"
/**
 * tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root
 * Return: If tree is NULL, return 0, else return height.
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0;
		size_t right = 0;

		if (tree == NULL)
			return (0);
		if (!tree->left)
			left = 1;
		if (tree->left)
			left = 1 + tree_height(tree->left);
		if (!tree->right)
			right = 1;
		if (tree->right)
			right = 1 + tree_height(tree->right);
		if (left > right)
			return (left);
		else
			return (right);
	}
	return (0);
}
/**
  * binary_tree_balance -  calculate the balance factor
  * @tree: is a pointer to the root node of the tree
  *
  * Return: Balance factor if tree is NULL returns 0
  **/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (tree_height(tree->left) - tree_height(tree->right));
}

