#include "binary_trees.h"
/**
 * binary_tree_is_leaf - detects if tree is leaf
 * @node: pointer to node
 * Return: true or false
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node) || node->left || node->right)
		return (0);
	return (1);
}
