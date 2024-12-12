#include <stddef.h>
#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root
 *@binary_tree_t: tree
 *Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_height = binary_tree_height(tree->left) + 1;

if (tree->right)
right_height = binary_tree_height(tree->right) + 1;

return ((left_height > right_height) ? left_height : right_height);
}
