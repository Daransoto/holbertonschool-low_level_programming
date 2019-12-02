#include "binary_trees.h"
/**
* binary_tree_node - Creates a binary tree node.
* @parent: Pointer to the parent node of the node to create.
* @value: Value to put in the new node.
* Return: Address of new node.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
