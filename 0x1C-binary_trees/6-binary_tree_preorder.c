#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse preorder style
 * @tree: pointer to tree
 * @func: function to call a node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
