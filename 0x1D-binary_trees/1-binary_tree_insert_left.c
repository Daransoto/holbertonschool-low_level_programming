#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts a node as the left-child of another node.
* @parent: Pointer to the node to insert the left-child in.
* @value: Value to store in the new node.
* Return: Pointer to the created node, or NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);
	if (parent->left)
		temp = parent->left;
	parent->left = binary_tree_node(parent, value);
	if (temp)
	{
		parent->left->left = temp;
		temp->parent = parent->left;
	}
	return (parent->left);
}
