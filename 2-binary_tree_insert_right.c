#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - Function that inserts a node as the left-child
 *
 * @parent: pointer to the node to insert the left-child
 * @value: the value of the new_node
 *
 * Return: A right-child of a node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        if (parent == NULL)
                return (NULL);
        new_node = malloc(sizeof(binary_tree_t));
        if (new_node == NULL)
                return (NULL);
        new_node->n = value;
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;
        if (parent->right != NULL)
        {
/* Make the existing right child of parent the left child of the new_node */
                new_node->right = parent->right;
                new_node->right->parent = new_node;
        }
        /* set the new node ad the right child of the parent */
        parent->right = new_node;
        return (new_node);
}
