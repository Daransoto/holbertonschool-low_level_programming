#include "binary_trees.h"
/**
* binary_tree_insert_right - Inserts a node as the right-child of another node.
* @parent: Pointer to the node to insert the left-child in.
* @value: Value to store in the new node.
* Return: Pointer to the created node, or NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_child = NULL;

	if (!parent)
		return (NULL);
	if (parent->right)
		old_child = parent->right;
	parent->right = binary_tree_node(parent, value);
	if (old_child)
	{
		parent->right->right = old_child;
		old_child->parent = parent->right;
	}
	return (parent->right);
}
