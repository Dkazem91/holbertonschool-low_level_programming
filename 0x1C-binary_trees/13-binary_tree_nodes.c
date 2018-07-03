#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes in tree
 * @tree: node to start at
 * Return: amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lnode, rnode, nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes++;
	lnode = binary_tree_nodes(tree->left);
	rnode = binary_tree_nodes(tree->right);
	nodes += (lnode + rnode);
	return (nodes);
}
