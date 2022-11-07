#include "binary_trees.h"

/**
 * traverse - traverse the tree and checks if it is a max binary heap
 * @tree: is a pointer to the root node of the tree to check
 * @max_y: the highest depth encountered
 * @cur_y: the current depth
 * Return: 1 if valid max binary heap, 0 therwise
 **/
int	traverse(const binary_tree_t *tree, int *max_y, int cur_y)
{
	if (!tree)
	{
		if (cur_y != *max_y + 1)
			return (0);
		return (1);
	}
	*max_y = (cur_y > *max_y ? cur_y : *max_y);
	if (tree->parent)
	{
		if (tree->n > tree->parent->n)
			return (0);
	}
	return (traverse(tree->right, max_y, cur_y + 1) &
			traverse(tree->left, max_y, cur_y + 1));

}

/**
 * binary_tree_is_heap - checks if a binary tree is a valid Max Binary Heap
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid Max Binary Heap, and 0 otherwise
 **/
int binary_tree_is_heap(const binary_tree_t *tree)
{
	int	y = 0;

	return (traverse(tree, &y, 0));
}
