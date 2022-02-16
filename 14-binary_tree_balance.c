#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return : tree balance, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
                return (0);

	return (binary_tree_height(tree->left) -
       	binary_tree_height(tree->right));
}

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

        heightleft = tree->left ? 1 + binary_tree_height(tree->left) : 1;
        heightright = tree->right ? 1 + binary_tree_height(tree->right) : 1;
        return ((heightleft > heightright) ? heightleft : heightright);
}
