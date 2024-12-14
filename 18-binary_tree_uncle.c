#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_uncle - function that finds the uncle of a node
 *
 * @node: pointer to the root node of the tree to find the uncle
 *
 * Return: uncle of a node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent = node->parent;
	grandparent = parent->parent;
	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
