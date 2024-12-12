#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if its a leaf or 0 if its not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
