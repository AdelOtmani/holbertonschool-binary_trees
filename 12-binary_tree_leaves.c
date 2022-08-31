#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, return (0)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int n = 0;

	if (!(tree))
		return (0);
	printf("tree->n = %d\n", tree->n);
	n += binary_tree_leaves(tree->left);
	n += binary_tree_leaves(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		n++;
	return (n);
}
