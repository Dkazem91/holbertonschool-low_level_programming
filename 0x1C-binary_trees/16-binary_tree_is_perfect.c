#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - finds if tree is full or not
 * @tree: root node
 * Return: balance
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent != NULL)
		return (0);
	if (binary_tree_is_full(tree) && !(binary_tree_balance(tree)))
		return (1);
	return (0);
}
