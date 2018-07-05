#include "binary_trees.h"
/**
 * binary_tree_is_full - finds if tree is full or not
 * @tree: root node
 * Return: balance
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
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

/**
 * binary_tree_is_perfect - finds if tree is full or not
 * @tree: root node
 * Return: balance
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
		return (1);

	return (0);
}
