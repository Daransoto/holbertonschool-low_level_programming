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
* traverse_level - Goes through a level in a binary tree.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
* @level: current level of the tree.
*/
void traverse_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		traverse_level(tree->left, func, level - 1);
		traverse_level(tree->right, func, level - 1);
	}
}
/**
* binary_tree_levelorder - Goes through a binary tree using level-order.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i, height;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree) + 1;
	for (i = 1; i <= height; i++)
		traverse_level(tree, func, i);
}
