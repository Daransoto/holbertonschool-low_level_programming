#include "binary_trees.h"
/**
* binary_tree_depth - Measures the depth of a node in a binary tree.
* @tree: Pointer to the node to measure the depth.
* Return: Depth of the node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth = 0;

	if (!tree)
		return (0);
	while ((tree = tree->parent))
		Depth++;
	return (Depth);
}
/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
* @first: Pointer to the first node.
* @second: Pointer to the second node.
* Return: Pointer to the lowest ancestor or NULL.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	while (binary_tree_depth(first) > binary_tree_depth(second))
		first = first->parent;
	while (binary_tree_depth(second) > binary_tree_depth(first))
		second = second->parent;
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
