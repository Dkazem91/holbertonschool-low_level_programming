#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses postorder style
 * @tree: pointer to tree
 * @func: function to call a node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
