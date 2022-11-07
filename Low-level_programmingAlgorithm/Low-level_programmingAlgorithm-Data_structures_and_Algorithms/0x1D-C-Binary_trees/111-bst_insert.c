#include "binary_trees.h"

/**
 * rec - finds the correct spot for the value in the BST
 * @tree: the root of the BST
 * @value: the value to place
 * Return: the parent node to the value to place or NULL
 **/
bst_t	*rec(bst_t *tree, int value)
{
	if (!tree->left && !tree->right)
		return (tree);
	if (value == tree->n)
		return (0);
	else if (value > tree->n)
		return (tree->right ? rec(tree->right, value) : tree);
	else if (value < tree->n)
		return (tree->left ? rec(tree->left, value) : tree);
	return (0);
}

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 * Return: the pointer to the created node, or NULL on failure
 **/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t	*new = NULL;
	bst_t	*node = NULL;

	if (!tree)
		return (0);
	if (!*tree)
	{
		new = binary_tree_node(NULL, value);
		if (!new)
			return (0);
		*tree = new;
		return (new);
	}
	node = rec(*tree, value);
	if (!node)
		return (0);
	new = binary_tree_node(node, value);
	if (!new)
		return (0);
	if (value > node->n)
		node->right = new;
	else
		node->left = new;
	return (new);
}
