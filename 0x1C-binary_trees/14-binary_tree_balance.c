#include "binary_trees.h"
/**
 * height - returns height
 * @tree: node to start
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = height(tree->left);
	rheight = height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	return (rheight + 1);
}
/**
 * binary_tree_balance - finds balance of tree at root
 * @tree: root node
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lside, rside, balance;

	if (tree == NULL)
		return (0);
	lside = height(tree->left);
	rside = height(tree->right);
	balance = lside - rside;
	return (balance);
}
