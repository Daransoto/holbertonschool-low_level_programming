#include "binary_trees.h"
/**
* binary_tree_leaves - Counts the leaves in a binary tree.
* @tree: Pointer to the root node of the tree to count the number of leaves.
* Return: Number of leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		leaves = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	else
		leaves = 1;
	return (leaves);
}
