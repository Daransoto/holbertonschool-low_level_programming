#include "binary_trees.h"
/**
* binary_tree_rotate_left - Performs a left-rotation on a binary tree.
* @tree: Pointer to the root node of the tree to rotate.
* Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (tree->right)
	{
		temp = tree->right;
		if (temp->left)
		{
			temp->left->parent = tree;
			tree->right = temp->left;
		}
		else
			tree->right = NULL;
		temp->left = tree;
		temp->parent = NULL;
		tree->parent = temp;
		return (temp);
	}
	return (tree);
}
