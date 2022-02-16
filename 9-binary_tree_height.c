#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree. 0, if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightleft = 0;
	size_t heightright = 0;

	if (!tree)
		return (0);

	heightleft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightright = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((heightleft > heightright) ? heightleft : heightright);
}
