#include "binary_trees.h"
/**
* binary_tree_rotate_right - Performs a right-rotation on a binary tree.
* @tree: Pointer to the root node of the tree to rotate.
* Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return (NULL);
	if (tree->left)
	{
		temp = tree->left;
		if (temp->right)
		{
			temp->right->parent = tree;
			tree->left = temp->right;
		}
		else
			tree->left = NULL;
		temp->right = tree;
		temp->parent = NULL;
		tree->parent = temp;
		return (temp);
	}
	return (tree);
}
