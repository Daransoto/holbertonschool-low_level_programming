#include "binary_trees.h"
/**
* binary_tree_inorder - Goes through a binary tree using in-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left && (tree->left->left || tree->left->right))
		binary_tree_inorder(tree->left, func);
	else if (tree->left)
		func(tree->left->n);
	func(tree->n);
	if (tree->right && (tree->right->left || tree->right->right))
		binary_tree_inorder(tree->right, func);
	else if (tree->right)
		func(tree->right->n);

}
