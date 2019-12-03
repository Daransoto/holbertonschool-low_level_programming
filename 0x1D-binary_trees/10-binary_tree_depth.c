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
