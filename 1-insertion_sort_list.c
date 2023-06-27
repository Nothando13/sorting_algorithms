#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev-n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
/**
 * swap_node - swap a node for his previous one
 * @node: node
 * @list: node list
 * Return: return a pointer to a node which was enter it
 */
void swap_node(listint_t **h, listint_t **n1, listint_t *n2)
{
	(n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;

	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;

	else
		*h = n2;

	(*n1)->prev = n2;
	*n1 = n2->prev;
}
