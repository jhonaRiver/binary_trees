#include "binary_trees.h"

/**
 *
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	if (tree == NULL)
		return (0);

	left_height = _height(tree->left);
	right_height = _height(tree->right);

	balance_factor = left_height - right_height;
	return (balance_factor);
}
