#include "binary_trees.h"

/**
 * binary_tree_delete - deletas an entire binary tree
 *
 * @tree: tree root
 * Return: no return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree_>right);

	free(tree);
}
