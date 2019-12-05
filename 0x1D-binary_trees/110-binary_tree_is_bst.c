#include "binary_trees.h"
/**
* check_order - Checks if all nodes are less or higher than the root.
* @tree: subtree to evaluate.
* @n: Value of the root node.
* @dir: 0 for left (check less values) 1 for right (higher values).
* Return: 1 if correct order, 0 if not.
*/
int check_order(binary_tree_t *tree, int n, int dir)
{
	if (!tree)
		return (1);
	if (dir)
		return (1 * tree->n > n ? (check_order(tree->right, n, dir) *
			check_order(tree->left, n, dir)) : 0);
	else
		return (1 * tree->n < n ? (check_order(tree->right, n, dir) *
			check_order(tree->left, n, dir)) : 0);
}
/**
* binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
* @tree: Pointer to the root node of the tree to check.
* Return: 1 if tree is a valid BST, and 0 otherwise.
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (!tree || !check_order(tree->left, tree->n, 0) ||
		!check_order(tree->right, tree->n, 1))
		return (0);
	if ((!tree->left || tree->left->n < tree->n) &&
		(!tree->right || tree->right->n > tree->n))
		return (1 * (tree->left ? binary_tree_is_bst(tree->left) : 1) *
			(tree->right ? binary_tree_is_bst(tree->right) : 1));
	return (0);
}
