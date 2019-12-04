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
/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node of the tree to measure the balance factor.
* Return: Balance factor.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left);
	else
		left = -1;
	if (tree->right)
		right = binary_tree_height(tree->right);
	else
		right = -1;
	return (left - right);
}
