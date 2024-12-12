#include "binary_trees.h"
/**
 *binary_tree_nodes - function that counts the nodes
 *@tree: pointer to the root node
 *@binary_tree_t: tree
 *Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);

if (tree->left || tree->right)
count = 1;

return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
