#include "binary_trees.h"
/**
* binary_tree_delete - Deletes an entire binary tree.
* @tree: Pointer to the root node of the tree to delete.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	while (tree)
	{
		if (tree->left)
			tree = tree->left;
		else if (tree->right)
			tree = tree->right;
		else
		{
			temp = tree;
			tree = tree->parent;
			if (tree && tree->left == temp)
				tree->left = NULL;
			else if (tree)
				tree->right = NULL;
			free(temp);
		}
	}
}
