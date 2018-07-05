#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"
/**
 * check_leaves - checks if all leaves are at same level
 * @tree: node to start
 * @current: current level of current leaf
 * @level: level of past leaves
 * Return: true or false
 */
int check_leaves(const binary_tree_t *tree, int current, int *level)
{

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
	{
		if (*level == 0)
		{
			*level = current;
			return (1);
		}
		return (*level == current);
	}
	return (check_leaves(tree->left, current + 1, level) &&
		check_leaves(tree->right, current + 1, level));
}
/**
 * binary_tree_is_perfect - finds if tree is full or not
 * @tree: root node
 * Return: balance
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (check_leaves(tree, 0, &level));
	}

	return (0);
}
