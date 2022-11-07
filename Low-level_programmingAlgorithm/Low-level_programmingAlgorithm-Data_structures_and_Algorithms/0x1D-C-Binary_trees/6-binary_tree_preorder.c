#include "binary_trees.h"

/**
  * preorder_func - traverse the tree using preorder \
  and applies func to each node's value (n)
  * @tree: the tree to traverse
  * @func: is a pointer to a function to call for each node
  **/
void preorder_func(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	preorder_func(tree->left, func);
	preorder_func(tree->right, func);
}

/**
  * binary_tree_preorder - goes through a bin. tree using pre-order traversal\
  and applies a func to each node's value
  * @tree: is a pointer to the root node of the tree to traverse
  * @func: is a pointer to a function to call for each node\
  The value in the node must be passed as a parameter to this function
  **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		preorder_func(tree, func);
}

