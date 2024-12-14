#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * height - Measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tre
 */
int height(const binary_tree_t *tree)
{
	int left_value;
	int right_value;

	if (tree == NULL)
		return (0);
	left_value = height(tree->left);
	right_value = height(tree->right);

	return ((left_value > right_value ? left_value : right_value) + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_value;
	int right_value;

	if (tree == NULL)
		return (0);
	left_value = height(tree->left);
	right_value = height(tree->right);

	return (left_value - right_value);
}
