#include "binary_trees.h"

/**
  * binary_tree_uncle - finds the uncle of a node
  * @node: is a pointer to the node to find the uncle
  * Return: the uncle or NULL
  **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t	*tmp;

	if (node)
	{
		tmp = node->parent;
		if (tmp)
		{
			if (node->parent->parent)
			{
				if (node->parent->parent->left == tmp)
					return (node->parent->parent->right);
				else
					return (node->parent->parent->left);
			}
		}
	}
	return (NULL);
}
