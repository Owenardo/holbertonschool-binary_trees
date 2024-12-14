#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * is_perfect_recursive - Checks if a binary tree is perfect
 * @node: Pointer to the current node
 * @depth: Depth of the tree
 * @level: Current level of the node
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *node, int depth, int level)
{
	if (node == NULL)
		return (1);
	if (node->left == NULL && node->right == NULL)
		return (depth == level + 1);
	if (node->left == NULL || node->right == NULL)
		return (0);
	return (is_perfect_recursive(node->left, depth, level + 1)
			&& is_perfect_recursive(node->right, depth, level + 1));
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = calculate_depth(tree);
	return (is_perfect_recursive(tree, depth, 0));
}
