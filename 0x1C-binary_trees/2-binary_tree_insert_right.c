#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node at right always
 * @parent: parent node to insert
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (!(parent))
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!(new))
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (!(parent->right))
		parent->right = new;
	else
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}

	return (new);
}
