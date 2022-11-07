#include "binary_trees.h"

/**
  * rev_preorder - traverse recursively the tree starting \
  from the right most element and stores the highest dept encountered \
  if a NULL element is found higher then the tree is not complete
  * @tree: is a pointer to the root node of the tree to check
  * @max_y: the highest depth encountered
  * @cur_y: the current depth
  * Return: 1 if complete, 0 therwise
  **/
int	rev_preorder(const binary_tree_t *tree, int *max_y, int cur_y)
{
	if (!tree)
	{
		if (cur_y != *max_y + 1)
			return (0);
		return (1);
	}
	*max_y = (cur_y > *max_y ? cur_y : *max_y);
	return (rev_preorder(tree->right, max_y, cur_y + 1) &
			rev_preorder(tree->left, max_y, cur_y + 1));
}

/**
  * binary_tree_is_complete - checks if a binary tree is complete
  * @tree: is a pointer to the root node of the tree to check
  * Return: 1 if the tree is complete, 0 otherwise
  **/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int	y = 0;

	return (rev_preorder(tree, &y, 0));

}
