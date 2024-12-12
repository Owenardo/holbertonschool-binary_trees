#include <stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_is_root - function that checks if a given node is a root
 *@node: pointer to check
 *@binary_tree_t: constant
 *Return: 1 or '
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL)
return (1);

return (0);
}
