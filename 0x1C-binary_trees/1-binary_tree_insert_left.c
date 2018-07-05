#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node at left always
 * @parent: parent node to insert
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (!(parent->left))
		parent->left = new;
	else
	{
		parent->left->parent = new;
		new->left = parent->left;
		parent->left = new;
	}

	return (new);
}
