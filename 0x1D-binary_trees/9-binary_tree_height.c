#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: Pointer to the root node of the tree to measure the height.
* Return: The height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);
	left_size = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_size = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (left_size >= right_size)
		return (left_size);
	else
		return (right_size);
}
