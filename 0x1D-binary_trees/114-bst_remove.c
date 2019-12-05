#include "binary_trees.h"
/**
* bst_search - Searches for a value in a Binary Search Tree.
* @tree: Pointer to the root node of the BST to search.
* @value: Value to search in the tree.
* Return: Pointer to the node containing a value equals to value.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree)
	{
		if (value == tree->n)
			return ((bst_t *)tree);
		else if (value < tree->n)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return (NULL);
}
/**
* bst_remove_2 - Removes a node from a Binary Search Tree.
* @root: Pointer to the root node of the tree where you will remove a node.
* @node: Node with value to remove in the tree.
* Return: Pointer to the new root node of the tree after removing the value.
*/
bst_t *bst_remove_2(bst_t *root, bst_t *node)
{
	if (node->left)
	{
		if (node == root)
			root = node->left;
		else
			if (node->parent->left == node)
				node->parent->left = node->left;
			else
				node->parent->right = node->left;
		node->left->parent = node->parent;
	}
	else
	{
		if (node == root)
			root = node->right;
		else
			if (node->parent->left == node)
				node->parent->left = node->right;
			else
				node->parent->right = node->right;
		node->right->parent = node->parent;
	}
	return (root);
}
/**
* bst_remove - Removes a node from a Binary Search Tree.
* @root: Pointer to the root node of the tree where you will remove a node.
* @value: Value to remove in the tree.
* Return: Pointer to the new root node of the tree after removing the value.
*/
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node, *iterator;

	node = bst_search(root, value);
	if (!root || !node)
		return (root);
	if (!node->left && !node->right)
	{
		if (!node->parent)
			root = NULL;
		else if (node->parent->left == node)
			node->parent->left = NULL;
		else
			node->parent->right = NULL;
	}
	else if (node->left && node->right)
	{
		iterator = node->right;
		while (iterator->left)
			iterator = iterator->left;
		if (node == root)
			root = iterator;
		else
			if (node->parent->left == node)
				node->parent->left = iterator;
			else
				node->parent->right = iterator;
		iterator->left = node->left;
		iterator->parent->left = NULL;
		iterator->right = node->right, node->left->parent = iterator;
		node->right->parent = iterator, iterator->parent = node->parent;
	}
	else
		root = bst_remove_2(root, node);
	free(node);
	return (root);
}
