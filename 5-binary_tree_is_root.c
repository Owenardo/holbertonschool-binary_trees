#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks given node is a root
 *@node: pointer to check
 *@binary_tree_t: tree
 *Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL)
return (1);

return (0);
}
