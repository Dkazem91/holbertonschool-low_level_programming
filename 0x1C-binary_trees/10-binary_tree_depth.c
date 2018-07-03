#include "binary_trees.h"
/**
 * binary_tree_depth - depth of node
 * @node: node to start from
 * Return: height from node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL || node->parent == NULL)
		return (0);

	depth = binary_tree_depth(node->parent) + 1;

	return (depth);
}
