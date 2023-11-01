#include "binary_trees.h"

/**
 * binary_tree_is_parent - checks if a node is a parent
 *
 * @node: pointer to the node to check
 * Return: 1 if node is parent, otherwise 0
 */
int binary_tree_is_parent(const binary_tree_t *node)
{
	int parent = 0;

	if (node && (node->left || node->right))
		parent = 1;

	return (parent);
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a tree
 *
 * @tree: tree root
 * Return: number of parent nodes in a tree or 0 if tree is NULL;
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
