#include "binary_trees.h"
/**
* bst_insert - Inserts a value in a Binary Search Tree.
* @tree: Double pointer to the root node of the BST to insert the value.
* @value: Value to store in the node to be inserted.
* Return: Pointer to the created node, or NULL on failure.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *iterator;

	if (!tree)
		return (NULL);
	if (!*tree)
		return (*tree = binary_tree_node(NULL, value));
	iterator = *tree;
	while (1)
	{
		if (value == iterator->n)
			return (NULL);
		else if (value < iterator->n && iterator->left)
			iterator = iterator->left;
		else if (value < iterator->n)
			return (iterator->left = binary_tree_node(iterator, value));
		else if (value > iterator->n && iterator->right)
			iterator = iterator->right;
		else
			return (iterator->right = binary_tree_node(iterator, value));
	}
}
