#include "binary_trees.h"

/**
  * cnt_leaves - recursively counts the leaves on a binary tree
  * @tree: is a pointer to the root node of the tree to count the nb of leaves
  * @nb: a pointer to a size_t used to increment
  **/
void	cnt_leaves(const binary_tree_t *tree, size_t *nb)
{
	if (!tree->left && !tree->right)
	{
		*nb += 1;
		return;
	}
	if (tree->left)
		cnt_leaves(tree->left, nb);
	if (tree->right)
		cnt_leaves(tree->right, nb);
}

/**
  * binary_tree_leaves - counts the leaves in a binary tree
  * @tree:  is a pointer to the root node of the tree to count the nb of leaves
  * Return: the number of leaves or 0
  **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t	leaves_nb;

	if (!tree)
		return (0);
	leaves_nb = 0;
	cnt_leaves(tree, &leaves_nb);
	return (leaves_nb);
}
