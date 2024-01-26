#include "sort.h"

/**
 * node_swap - Swaps two nodes in a doubly linked list.
 * @l: A pointer to list head.
 * @n1: The first node.
 * @n2: The second node.
 */
void node_swap(listint_t **l, listint_t *n1, listint_t *n2)
{
	n1->next = n2->next;
	n2->prev = n1->prev;

	if (n1->next)
		n1->next->prev = n1;
	if (n2->prev)
		n2->prev->next = n2;
	else
		*l = n2;

	n2->next = n1;
	n1->prev = n2;
}

/**
 * cocktail_sort_list - Sort a linked list using cocktail sort algorithm.
 *
 * @list: A pointer to list head.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tmp;
	int swapped = 1;

	tmp = *list;
	if (!list || !*list || !(*list)->next)
		return;

	while (swapped)
	{
		swapped = 0;
		while (tmp->next)
		{
			if (tmp->n > tmp->next->n)
			{
				node_swap(list, tmp, tmp->next);
				print_list((const listint_t *)*list);
				swapped = 1;
			}
			else
				tmp = tmp->next;
		}
		if (!swapped)
			break;
		swapped = 0;
		while (tmp->prev)
		{
			if (tmp->n< tmp->prev->n)
			{
				node_swap(list, tmp->prev, tmp);
				print_list((const listint_t *)*list);
				swapped = 1;
			}
			else
				tmp = tmp->prev;
		}
	}
}
