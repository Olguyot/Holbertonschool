#include "binary_trees.h"

/**
  * binary_tree_insert_right - create and inserts a node as the right-child \
  of another node
  * @parent: is a pointer to the node to insert the right-child in
  * @value: is the value to store in the new node
  * Return: the newly created and inserted node
  **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t	*new;
	binary_tree_t	*old;

	if (!parent)
		return (NULL);
	old = parent->right;
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	parent->right = new;
	if (old)
	{
		new->right = old;
		old->parent = new;
	}
	return (new);
}
