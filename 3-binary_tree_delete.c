#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire tree using recursion
 * when the node left and right are NULL
 * @tree: pointer to the root node of the tree to delete
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
