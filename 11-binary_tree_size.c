#include "binary_trees.h"
/**
* binary_tree_size - Node print size node
* @tree: Pointer to the tree 
* Return: size of node
*/
size_t binary_tree_size(const binary_tree_t *tree)
{	
	if (!tree)
		return (0);
	
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
