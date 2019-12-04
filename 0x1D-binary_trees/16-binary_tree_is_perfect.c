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
/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: Pointer to the root node of the tree to check.
* Return: 1 if the tree is full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (1 * binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right
));
	else
		return (0);
}
/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root node of the tree to check.
* Return: 1 if it's perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{
		if (tree->left)
			return (1 * binary_tree_is_perfect(tree->left) *
binary_tree_is_perfect(tree->right));
		else
			return (1);
	}
	return (0);
}
