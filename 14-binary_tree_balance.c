#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t lheight = 0, rheight = 0;

		lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lheight > rheight) ? lheight : rheight);
	}
	return (0);
}
