#include "binary_trees.h"
/**
* binary_tree_sibling - Finds the sibling of a node.
* @node: Pointer to the node to find the sibling.
* Return: Pointer to siblibg or null.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
