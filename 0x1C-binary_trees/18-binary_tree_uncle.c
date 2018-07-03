#include "binary_trees.h"
/**
 * binary_tree_uncle - returns uncle of tree
 * @node: node to get uncle of
 * Return: pointer of uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *padres, *grandparent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	padres = node->parent;
	grandparent = padres->parent;
	if (grandparent)
	{
		if (grandparent->left == padres)
			return (grandparent->right);
		return (grandparent->left);
	}
	return (NULL);
}
