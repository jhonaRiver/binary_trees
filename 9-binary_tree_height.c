#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: Height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left, height = 0;

	if (tree == NULL)
		return (0);

	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	height += (right > left ? right : left);

	return (height);
}
